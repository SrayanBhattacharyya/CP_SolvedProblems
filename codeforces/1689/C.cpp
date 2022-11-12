//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5 + 10;
vector <ll> g[N], sz(N);

ll ans(ll v = 0, ll p = -1) {
    if (p != -1 && g[v].size() == 1) {
        return 0;
    }
    if ((p == -1 && g[v].size() == 1) || (p != -1 && g[v].size() == 2)) {
        for (ll i : g[v]) {
            if (i != p) return sz[i];
        }
    }
    ll mx = 0;
    for (auto &i : g[v]) {
        if (i == p) continue;
        mx = max(mx, sz[v] - sz[i] - 2 + ans(i, v));
    }
    return mx;
}
 
void calc_sz(ll v = 0, ll p = -1) {
    if (p != -1 && g[v].size() == 1) {
        sz[v] = 0;
        return;
    }
    for (auto &i : g[v]) {
        if (i == p) continue;
        calc_sz(i, v);
        sz[v] += sz[i] + 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        for (ll i = 0; i < n; ++i) {
            g[i].clear();
            sz[i] = 0;
        }
        for (ll i = 0; i < n - 1; ++i) {
            ll u, v;
            cin >> u >> v;
            u--, v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        calc_sz();
        cout << ans() << '\n';
    }    
    return 0;
}