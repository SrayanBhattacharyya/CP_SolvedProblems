#include <bits/stdc++.h>

using namespace std;
#define ll long long

const ll N = 2e5 + 5;

ll n, q;
ll a[N];
pair <ll, ll> b[N];

void solve() {
    cin >> n >> q;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        b[i].first = b[i].second = -1;
    }
    ll j = 0, cnt = 1;
    for (ll i = 1; i < n; ++i) {
        if (a[j] > a[i]) {
             if (b[j].first == -1) b[j].first = i;
        } else {
            if (~b[j].first) b[j].second = i - 1;
            b[i].first = i;
            j = i;
        }
    }
    b[j].second = INT_MAX;
    while (q--) {
        ll i, k;
        cin >> i >> k;
        --i;
        if (~b[i].first && k >= b[i].first) cout << min(k, b[i].second) - b[i].first + 1 << endl;
        else cout << "0\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    ll t, i = 0;
    cin >> t;
    while (t--) {
        cerr << "TESTCASE " << i++ << ":\n";
        solve();
        cerr << endl;
    }
}
