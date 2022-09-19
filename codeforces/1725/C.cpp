//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 998244353;

ll power(ll m, ll n){
	if (n == 0)
		return 1;
	if (m <= 0)
		return 0;
	if (n % 2 == 1)
		return (m * power(m, n - 1)) % mod;
	ll x = power(m, n / 2);
	return (x * x) % mod;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
	cin >> n >> m;
	map <ll, ll> mp;
	vector <ll> sums;
	ll s = 0;
	for (ll i = 0; i < n; i++){
		ll x;
		cin >> x;
		sums.emplace_back(s);
		mp[s] = i;
		s += x;
	}
	ll answer = 0;
	ll k = 0;
	for (ll i = 0; i < n; i++) if (s % 2 == 0 && mp.count(sums[i] - s / 2)) k++;
	vector <ll> fact;
	fact.emplace_back(1);
	for (ll i = 1; i <= max(m, k); i++) fact.emplace_back((fact[i - 1] * i) % mod);
	for (ll i = 0; i <= k; i++){
		ll ans = 1;
		ans *= power(m - i, n - k - i);
		ans %= mod;
		ans *= power(m - i - 1, k - i);
		ans %= mod;
		ans *= fact[m];
		ans %= mod;
		ans *= fact[k];
		ans %= mod;
		ll a = mod;
		ll b = fact[i];
		ll p = 0;
		ll q = 1;
		while (b != 1){
			p -= q * (a / b);
			swap(p, q);
			a = a%b;
			swap(a, b);
			p %= mod; q %= mod; a %= mod; b %= mod;
			if (q < 0) q += mod;
			if (p < 0) p += mod;
		}
		ans *= q;
		ans %= mod;
		a = mod;
		b = fact[k - i];
		p = 0;
		q = 1;
		while (b != 1){
			p -= q * (a / b);
			swap(p, q);
			a = a%b;
			swap(a, b);
			p %= mod; q %= mod; a %= mod; b %= mod;
			if (q < 0) q += mod;
			if (p < 0) p += mod;
		}
		ans *= q;
		ans %= mod;
		a = mod;
		b = fact[m - i];
		p = 0;
		q = 1;
		while (b != 1){
			p -= q * (a / b);
			swap(p, q);
			a = a%b;
			swap(a, b);
			p %= mod; q %= mod; a %= mod; b %= mod;
			if (q < 0) q += mod;
			if (p < 0) p += mod;
		}
		ans *= q;
		ans %= mod;
		answer += ans;
		answer %= mod;
	}
	cout << answer << "\n";
    return 0;
}