//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll C = 70;

vector<ll> f;

void precalc() {
	f = { 1, 1 };
	for (ll i = 2; i < C; i++) {
		f.push_back(f[i - 1] + f[i - 2]);
	}
}

void solve() {
	ll n, sum = 0;
	cin >> n;
	vector <ll> a(n);
	multiset <pair<ll, ll>> vals;
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		vals.insert({ a[i], i });
	}
	ll cnt = lower_bound(f.begin(), f.end(), sum + 1)-f.begin() - 2;
	ll last = -1;
	for (ll i = cnt; i >= 0; i--) {
		auto el = --vals.end();
		ll cur = (*el).first, id = (*el).second;
		if (id == last) {
			if (vals.size() > 1 && (*(----vals.end())).first == cur) {
				el = (----vals.end());
				id = (*el).second;
			}
		}
		if (id == last || cur < f[i]) {
			cout << "NO\n";
			return;
		}
		last = id;
		vals.erase(el);
		cur -= f[i];
		vals.insert({ cur, id });
	}
	cout << ((*vals.rbegin()).first == 0 ? "YES" : "NO") << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precalc();
    ll t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}