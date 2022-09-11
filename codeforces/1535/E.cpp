//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5 + 5;
ll par[N][19], a[N], c[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll q, a0, c0;
	cin >> q >> a[0] >> c[0];
	for(ll i = 1; i <= q; i++) {
		ll type;
		cin >> type;
		if(type == 1) {
			ll p;
			cin >> p >> a[i] >> c[i];
			par[i][0] = p;
			for(ll j = 1; j < 19; j++) par[i][j] = par[par[i][j - 1]][j - 1];
		} 
		else {
			ll v, w;
			cin >> v >> w;
			ll gold = 0;
			ll ans = 0;
			while(w > 0 && a[v] > 0) {
				ll u = v;
				for(ll i = 18; i >= 0; i--) {
					ll p = par[u][i];
					if(a[p] > 0) u = p;
				}
				ll mn = min(w, a[u]);
				w -= mn;
				a[u] -= mn;
				gold += mn;
				ans += 1LL * mn * c[u];
			}
			cout << gold << ' ' << ans << endl;
		}
	}
    return 0;
}