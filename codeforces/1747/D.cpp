//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, q;
    cin >> n >> q;
    vector <ll> a(n + 1, 0), pf(n + 1, 0), sum(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        pf[i] = pf[i - 1] ^ a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    ll bits[n][31];
    memset(bits, 0, sizeof(bits));
    for (ll i = 0; i < n; i++) {
        for (ll bit = 0; bit < 31; bit++) {
            bits[i][bit] = (a[i] & (1 << bit) == 0 ? 0 : 1);
        }
    }
    ll x = 0;
    map <ll, vector <ll>> odd, even;
    for (ll i = 0; i < n; i++) {
        x = x ^ a[i];
        if (i % 2 == 0) even[x].push_back(i);
        else odd[x].push_back(i);
    }
    while (q--) {
        ll l, r;
        cin >> l >> r;
        ll n_ = r - l + 1;
        if (sum[r] - sum[l - 1] == 0) {
            cout << 0 << "\n";
            continue;
        }
        if (n_ <= 2) {
            cout << -1 << "\n";
            continue;
        }
        if (pf[r] != pf[l - 1]) {
            cout << -1 << "\n";
            continue;
        }
        if (n_ % 2 == 1) {
            cout << 1 << "\n";
            continue;
        }
        if (a[l] == 0 || a[r] == 0) {
            cout << 1 << "\n";
            continue;
        }
        if (l % 2 == 0) {
            auto it = upper_bound(even[pf[l - 1]].begin(), even[pf[l - 1]].end(), r);
            if ((it) == even[pf[l - 1]].begin()) {
                cout << -1 << "\n";
                continue;
            }
            it--;
            ll ind = (*it);
            if (ind < l) {
                cout << -1 << "\n";
                continue;
            }
            cout << 2 << "\n";
        } 
        else {
            auto it = upper_bound(odd[pf[l - 1]].begin(), odd[pf[l - 1]].end(), r);
            if ((it) == odd[pf[l - 1]].begin()) {
                cout << -1 << "\n";
                continue;
            }
            it--;
            ll ind = (*it);
            if (ind < l) {
                cout << -1 << "\n";
                continue;
            }
            cout << 2 << "\n";
        }
    }
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