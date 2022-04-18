#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
#define mods 998244353
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <ll> vll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define min3(a,b,c) min(min((a),(b)),(c))
#define input(a) fo(i,0,a.size()){ cin >> a[i];}
#define st(s) sort(s.begin(),s.end())
#define dst(s) sort(s.begin() , s.end() , greater<int>())
#define fo(i,a,b) for(int i = a; i < b; i++)
//Srayan Bhattacharyya JU EE

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
        int n, i;
        cin >> n;
        vi a(n), res(33);
        input(a);
        fo(j,0,32){
        for(int i = 0; i < n; i++){
            if(a[i] & (1 << j)) res[j]++;
        }
        }
        vi ans;
        fo(i,1,n + 1){
            bool ok = true;
        fo(j,0,32){
            if(res[j] % i != 0){
                ok = false;
                break;
            }
        }
        if(ok) ans.push_back(i);
        }
        st(ans);
        for (auto val : ans) cout << val << " ";
        cout << "\n";
        }
    return 0;
}