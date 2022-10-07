#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll N = 5e2 + 5;
 
ll f(ll r) {
	ll o = 0, e = 0;
	ll x = 1, t = 1;
	while (r) {
		ll inc;
		if (r >= x)
			inc = x;
		else
			inc = r;
		r -= inc;
		if (t & 1)
			o += inc;
		else
			e += inc;
		x <<= 1;
		t++;
	}
	o %= mod, e %= mod;
	return (o * o + e * (e + 1)) % mod;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll l, r;
	cin >> l >> r;
	cout << (f(r) - f(l - 1) + mod) % mod << "\n";
    return 0;
}