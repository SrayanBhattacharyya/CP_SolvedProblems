#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector <ll> a(n), b(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];
    for (ll i = 0; i < n; ++i) cin >> b[i];
    vector <ll> c1, c2;
    ll res = 0;
    for (ll i = 0; i < n; ++i) {
        res += b[i];
        if (a[i]) c1.push_back(b[i]);
        else c2.push_back(b[i]);
    }
    sort (c1.rbegin(), c1.rend());
    sort (c2.rbegin(), c2.rend());
    ll add1 = 0, add2 = 0;
    ll sz1 = c1.size(), sz2 = c2.size();
    if ((sz1 == 0) || (sz2 == 0)) {
        cout << res << "\n";
        return;
    }
    if (sz1 == sz2) {
        res = res * 2 - min(c1[sz1 - 1], c2[sz2 - 1]);
        cout << res << "\n";
        return;
    }
    ll m = min(sz1, sz2);
    for (ll i = 0; i < m; ++i) {
        res += c1[i] + c2[i];
    }
    cout << res << "\n";
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