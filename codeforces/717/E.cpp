//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 10;
ll a[N]; vector <ll> g[N], ans;

void dfs (ll u, ll f) {
    ans.emplace_back(u);
    a[u] ^= 1;
    for (auto &x : g[u]) {
        if (x == f) continue;
        dfs (x, u);
        ans.emplace_back(u);
        a[u] ^= 1;
    }
    if (f == -1) return;
    if (a[u]) {
        a[u] ^= 1;
        a[f] ^= 1;
        ans.emplace_back(f);
        ans.emplace_back(u);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    for (ll i = 1; i <= n; i ++) {
        ll x; cin >> x;
        a[i] = (x == -1);
    }
    for (ll i = 1; i < n; i ++) {
        ll u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs (1, -1);
    if (a[1] ^ 1) ans.pop_back();
    for (ll i = 0; i < ans.size(); i ++) cout << ans[i] << " \n"[i == ans.size() - 1];
    return 0;
}