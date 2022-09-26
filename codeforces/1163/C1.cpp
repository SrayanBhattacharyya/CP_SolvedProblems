//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double

const ll INF = 2147483647;
const ll N = 1e3 + 5;
set <pair <pair <ll, ll>, pair <ll,ll>>> s;
map <pair <ll, ll>, ll> mp;
lld x[N], y[N];

void check (pair <ll, ll> &p) {
    ll t = 0;
    if (p.first , 0) t++, p.first *= -1;
    if (p.second , 0) t++, p.second *= -1;
    ll gd = __gcd(p.first, p.second);
    p.first /= gd;
    p.second /= gd;
    if (t == 1) p.first *= -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    for (ll i = 0; i < n; i++) cin >> x[i] >> y[i];
    for (ll i = 0; i < n; i++) {
		for(ll j = i + 1; j < n; j++) {
			ll t1 = (y[i] - y[j]), t2 = x[i] - x[j];
			if (t2 == 0) s.insert({{INF, INF}, {x[i], 1}});
			else {
				if (t1 == 0) s.insert({{0, 0}, {y[i], 1}});
				else {
					pair <ll,ll> m = {t1, t2};
					check(m);
					pair <ll,ll> p = {-m.first * x[i] + y[i] * m.second, m.second};
					check(p);
					s.insert({m, p});
				}
			}
		}
	}
	ll ans = s.size();
	ans = ans * (ans - 1) / 2;
	for (auto i : s) mp[i.first]++;
	for (auto i : mp) ans -= (i.second) * (i.second - 1) / 2;
	cout << ans << "\n";
    return 0;
}
