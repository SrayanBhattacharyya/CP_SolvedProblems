//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, x; 
const ll N = 2e5 + 5;
vector <ll> g[N];
ll dist[N];

void dfs1(ll s, ll p, ll cd) {
    dist[s] = cd;
    for (ll a : g[s]) {
        if (a == p) continue;
        dfs1(a, s, cd+1);
    }
}

ll dfs2(ll s, ll p, ll cd) {
    ll cmx = dist[s];
    if (dist[s] <= cd) return cmx;
    for (ll a : g[s]) {
        if (a == p) continue;
        cmx = max(cmx, dfs2(a, s, cd+1));
    }
    return cmx;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    for (ll i = 0; i < n-1; ++i) {
        ll a, b;
        cin >> a >> b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    dfs1(1, -1, 0);
    cout << (2 * dfs2(x, -1, 0)) << "\n";
    return 0;
}