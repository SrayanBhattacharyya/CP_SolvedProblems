#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()
{
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll ans = 0;
        if (n == 1) cout << 0 << "\n";
        else{
            for (ll i = 3; i <= n ; i += 2){
                ll moves = (4*(i - 1))*(i - 1)/2;
                ans += moves;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}