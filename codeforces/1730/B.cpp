#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 10;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        ll mn = 1e10, mx = -(1e10);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            mn = min (mn, a[i] - x);
			mx = max (mx, a[i] + x); 
        }
        cout << setprecision(8) << (float)((mn + mx) / 2.0) << "\n";
    }    
    return 0;
}