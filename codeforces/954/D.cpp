//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1000 + 7;
 
ll dist[N][N];
vector <ll> g[N];

int main(){
    ll n, m, s, t;
    cin >> n >> m >> s >> t;
    s--, t--;
    for (ll i = 0; i < m; i++) {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (ll i = 0; i < n; i++) {
        queue <ll> q;
        q.push(i);
        for (ll j = 0; j < n; j++)
        {
            dist[i][j] = -1;
        }
        dist[i][i] = 0;
        while (!q.empty()) {
            ll v = q.front();
            q.pop();
            for (ll to : g[v]) {
                if (dist[i][to] == -1) {
                    dist[i][to] = dist[i][v] + 1;
                    q.push(to);
                }
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = i + 1; j < n; j++) {
            if (dist[i][j] != 1 && min(dist[s][i] + 1 + dist[j][t], dist[s][j] + 1 + dist[i][t]) >= dist[s][t]) ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}