#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, q; cin >> n >> q;
        vector <ll> stairs(n + 1), mx(n + 1), pfx(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> stairs[i];
            pfx[i] = pfx[i - 1] + stairs[i];
            mx[i] = max(mx[i - 1], stairs[i]);
        }
        for (ll i = 1; i <= q; i++) {
            ll x; cin >> x;
            ll k = upper_bound(mx.begin(), mx.end(), x) - mx.begin() - 1;
            cout << pfx[k] << " ";
        }
        cout << "\n";
    }
}
