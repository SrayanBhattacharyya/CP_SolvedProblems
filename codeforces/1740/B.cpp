//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector <pair <ll, ll>> a(n);
    ll p = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        if (max(a[i].first, a[i].second) > max(a[p].first, a[p].second)) {
            p = i;
        }
    }
    ll ans = max(a[p].first, a[p].second) * 2;
    for (ll i = 0; i < n; i++) {
        ans += min(a[i].first, a[i].second) * 2;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }    
    return 0;
}