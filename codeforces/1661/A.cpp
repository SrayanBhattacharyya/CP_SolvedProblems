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
    while (t--){
        ll n, a[26], b[26];
        cin >> n; 
        for (ll i = 1; i <=  n; i++)cin >> a[i];
        for (ll i = 1; i <= n; i++)cin >> b[i];
        ll ans = 0;
        for (ll i = 2; i <= n; i++)ans += min(abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]), abs(a[i] - b[i - 1]) + abs(b[i] - a[i - 1]));
        cout << ans << "\n";
    }
    return 0;
}