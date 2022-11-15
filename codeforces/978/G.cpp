//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
	vector <pair <ll, pair <ll, ll>>> u;
	map <ll, ll> mp;
	for (ll i = 0; i < m; i++) {
		ll x, y, z;
		cin >> x >> y >> z;
		u.push_back({y, {x, z}});
		mp[y] = i + 1;
	}
	ll ans[n + 1];
	for (ll i = 0; i <= n; i++) {
		if (mp.count(i)) ans[i] = m + 1;
		else ans[i] = 0;
	}
	ranges::sort(u);
	for (ll i = 0; i < u.size(); i++) {
		ll exam = u[i].first;
        ll start = u[i].second.first;
        ll days = u[i].second.second;
        ll cnt = 0;
		for (ll j = start; j < exam; j++) {
			if (cnt == days) break;
			if (ans[j] == 0) {
				ans[j] = mp[exam];
				cnt++;
			}
		}
		if (cnt != days) {
			cout << -1 << "\n";
			return 0;
		}
	}
	for (ll i = 1; i <= n; i++) cout << ans[i] << " ";
	cout << "\n";
    return 0;
}