//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll extendedEuclid(ll a, ll b, ll& x, ll& y) {
	if (a == 0) {x = 0; y = 1; return b;}
	ll x1, y1, d = extendedEuclid(b % a, a, x1, y1);
	x = y1 - (b / a) * x1; y = x1;
	return d;
}

ll multInv(ll n, ll p) {
	ll x, y;
	extendedEuclid(n, p, x, y); 
	return ((x % p) + p) % p;
}

void solve() {
	ll a, b, d;
	cin >> a >> b >> d;
	ll mdf = 0;
	while (d % 2 == 0) {
		if ((a & 1) || (b & 1)) {
			cout << -1 << "\n";
			return;
		}
		a /= 2;
		b /= 2;
		d /= 2;
		++mdf;
	}
	ll y = a | b;
	ll f = (1ll << (30 - mdf));
	ll x = ((multInv(f, d) * (-y)) % d + d) % d;
	cout << (f * x + y) * (1 << mdf) << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		solve();
    }    
    return 0;
}