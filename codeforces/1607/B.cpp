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
    cout.tie(0);
    int t; cin >> t;
    while (t--){
        ll x, n; cin >> x >> n; ll y,z = 0;
        y = n % 4;
        if (y==1) z= -n;
        else if (y==2) z = 1;
        else if (y==3) z = n + 1;
        if (x&1) cout << x-z << "\n";
        else cout << x+z << "\n";
    }
    return 0;
}