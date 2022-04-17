#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
#define mods 998244353
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int N;
    cin >> N;
    vector<long long> A(N);
    long long s = 0;
    for(auto&i: A)
    {
        cin >> i;
        s += i;
    }
    sort(A.begin(), A.end());

    int M;
    cin >> M;
    for(int i=0; i<M; ++i)
    {
        long long x, y; cin >> x >> y;
        auto it = lower_bound(A.begin(), A.end(), x);
        long long ans = x+y;
        if(it != A.end()) 
        ans = min(max(0LL, y-(s-*it)), ans);
        if(it != A.begin()) 
        ans = min(ans, max(0LL, y-(s-*prev(it)))+(x-*prev(it)));
        cout << ans << '\n';
    }

}