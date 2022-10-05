#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll calc(const vector<ll>& x) {
    ll ans = 0;
    for (ll i = 0, pw = 1; i < x.size(); i++, pw *= 3) {
        ans += x[i] * pw;
    }
    return ans;
}
 
vector<ll> combine(const vector<ll>& x, const vector<ll>& y) {
    vector<ll> z(x.size());
    for (ll i = 0; i < x.size(); i++) {
        if (x[i] == y[i]) {
            z[i] = x[i];
        } else {
            z[i] = 3 - x[i] - y[i];
        }
    }
    return z;
}
 
void solve() {
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> a(n, vector<ll>(k));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }
    map<ll, ll> cs, cp;
    vector<ll> ha(n);
    for (ll i = 0; i < n; i++) {
        ha[i] = calc(a[i]);
        cs[ha[i]]++;
    }
    vector <vector <vector <ll>>> to(n, vector <vector<ll>>(n));
    vector <vector <ll>> cz(n, vector<ll>(n));
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            to[i][j] = combine(a[i], a[j]);
            cz[i][j] = calc(to[i][j]);
            cp[cz[i][j]]++;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            if (cs.count(cz[i][j])) {
                ans += cp[ha[i]] - 1;
                ans += cp[ha[j]] - 1;
                ans += cp[cz[i][j]] - 1;
            }
        }
    }
    cout << ans / 6 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}