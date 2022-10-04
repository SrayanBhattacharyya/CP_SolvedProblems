#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i] - 1;
    }
    if (a[0] == 1) {
        cout << sum << '\n';
        return;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += (a[i] + (2 * a[0] - 1) - 1) / (2 * a[0] - 1) - 1;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}