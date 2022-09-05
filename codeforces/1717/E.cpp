//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 5;
const ll MOD = 1e9 + 7;
bool flg[N]; ll mob[N];

void fmob() {
	ll i, j;
	mob[1] = 1;
	for (ll i = 1; i < N; i ++) {
		for (ll j = i * 2; j < N; j += i) {
			mob[j] -= mob[i];
		}
	}
}

vector <ll> fac[N]; ll fi[N];

void Factorinit() {
	fmob();
	ll i, j;
	for (i = 1; i < N; i ++) {
		for (j = i; j < N; j += i) fac[j].emplace_back(i);
	}
	for (i = 1; i < N; i ++) {
		fi[i] = 0;
		for (ll j : fac[i]) (fi[i] += mob[j] * (i / j)) %= MOD;
	}
	fi[1] = 0;
}

ll lcm(ll a, ll b) {
	return 1ll * a * b / __gcd(a, b);
}

ll a[N], b[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Factorinit();
	ll n; cin >> n;
	ll ans = 0;
	for (ll i = 1; i <= n - 1; i ++) {
		ll sz = fac[n - i].size();
		for (ll j = 0; j < sz; j ++) {
			ll k = fac[n - i][j];
			ll m = (n - i) / k;
			(ans += 1ll * lcm(k, i) * fi[m] % MOD) %= MOD;
		}
	}
	cout << ans << endl;
    return 0;
}