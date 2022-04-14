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
    int t; cin >> t;
    int x =300007,y;
    vector<int>v(x,0);
    rep_a(i, 1, x) v[i]=v[i-1]^i;
    while (t--){
        int a, b; cin >> a >> b;
        if (v[a-1] == b) cout << a << "\n";
        else if(a !=(v[a-1]^b)) cout << a + 1 << "\n";
        else cout << a + 2 << "\n";
    }
    return 0;
}