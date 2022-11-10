//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5 + 10;
ll W[N], dp[N], res = 0;
vector <pair <ll, ll>> g[N];

void dfs(int u = 0, int p = -1) {
	dp[u] = W[u];
	for (auto e : g[u]) {
		auto v = e.first;
		if (v != p) {
			dfs(v, u);
			auto w = e.second;
			if (dp[v] >= w) {
				res = max(res, dp[u] + dp[v] - w);
				dp[u] = max(dp[u], dp[v] - w + W[u]);
			}
		}
	}
	res = max(res, dp[u]);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, u, v, w;
	cin >> n;
	for (ll i = 0; i < n; i++)
		cin >> W[i];
	for (ll i = 1; i < n; i++) {
		cin >> u >> v >> w;
		u--, v--;
		g[u].push_back( { v, w });
		g[v].push_back( { u, w });
	}
	dfs();
	cout << res << '\n';
    return 0;
}