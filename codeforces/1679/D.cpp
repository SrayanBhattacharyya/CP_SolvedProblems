//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, m, k, x, y;
    cin >> n >> m >> k;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++) cin >> a[i];
    vector <pair <ll, ll>> ed;
    for (ll i = 0; i < m; i++) cin >> x >> y, ed.push_back({x, y});
    ll inf = 1e9 + 1;
    ll l = 1, r = inf, ans = inf;
    while (l <= r) {
        ll mid = (l + r) / 2;
        vector <ll> adj[n + 1], in(n + 1);
        for (ll i = 0; i < m; i++) {
            if (a[ed[i].X] > mid || a[ed[i].Y] > mid) continue;
            adj[ed[i].X].push_back(ed[i].Y);
            in[ed[i].Y]++;
        }
        bool flag = false;
        vector <ll> dp(n + 1);
        ll nn = 0;
        for (ll i = 1; i <= n; i++) if (a[i] <= mid) nn++;
        queue <ll> q;
        ll cnt = 0;
        for (ll i = 1; i <= n; i++) {
            if (a[i] > mid) continue;
            if (in[i] == 0) q.push(i), dp[i] = 1;
        }
        while (!q.empty()) {
            ll u = q.front(); q.pop();
            cnt++;
            for (auto s : adj[u]) {
                in[s]--;
                dp[s] = max(dp[s], dp[u] + 1);
                if (in[s] == 0) q.push(s);
            }
        }
        if (cnt != nn) flag = true;
        else {
            for (ll i = 1; i <= n; i++) if (dp[i] >= k) flag = true;
        }
        if (flag) r = mid - 1, ans = mid;
        else l = mid + 1;
    }
    if (ans == inf) ans = -1;
	cout << ans; 
	return 0;
}