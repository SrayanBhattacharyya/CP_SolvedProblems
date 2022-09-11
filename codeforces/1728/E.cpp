//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll inversemod(ll p, ll q) {
  return (p > 1 ? q - 1LL * inversemod(q % p, p) * q / p : 1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
	cin >> n;
	vector <pair <ll, ll>> c(n);
	ll s = 0;
	for (ll i = 0; i < n; i++) {
		cin >> c[i].first >> c[i].second;
		s += c[i].second;
	}
	sort(c.begin(), c.end(), [&] (const pair<ll, ll> &x, const pair<ll, ll> &y) {return x.first - x.second > y.first - y.second;});
	vector<ll> val(n + 1);
	val[0] = s;
	for (ll i = 0; i < n; i++) {
		s += c[i].first - c[i].second;
		val[i + 1] = s;
	}
	ll opt = 0;
	while (opt < n && c[opt].first > c[opt].second) opt++;
	ll q;
	cin >> q;
	while (q--) {
		ll x, y;
		cin >> x >> y;
		ll g = __gcd(x, y);
		if (n % g != 0) {
			cout << "-1\n";
			continue;
		}
		ll a = (1LL * (n / g) * inversemod(x / g, y / g)) % (y / g);
		if (1LL * a *  x > n) {
			cout << "-1\n";
			continue;
		}
		ll ans = 0;
		ll target = opt / x;
		target = (y / g) * (target / (y / g)) + a;
		while (1LL * target * x > opt) target -= y /g;
		if (target >= 0) ans = max(ans, val[target * x]);
		target += y / g;
		if (1LL * target * x <= n) ans = max(ans, val[target * x]);
		cout << ans << '\n';
	}	
    return 0;
}