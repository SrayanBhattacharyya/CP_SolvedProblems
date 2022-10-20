#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector <ll> divisors(ll n) {
    vector <ll> v;
    for (ll i = 1; i <= (ll)sqrt(n); i++){
        if (n % i == 0){
            v.emplace_back(i);
            if ((n / i) != i) v.emplace_back(n / i);
        }
    }
    return v;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		auto aa = divisors(a);
		auto bb = divisors(b);
		vector <ll> ab;
		ab.reserve(aa.size() + bb.size());
		for (auto &x : aa) for (auto &y : bb) ab.emplace_back(x * y);
		ll x = -1, y = -1;
		for (auto &i : ab) {
			ll z = a * b / i;
			x = ((a / i) + 1) * i;
			y = ((b / z) + 1) * z;
			if (x <= c && y <= d) break;
			x = -1;
			y = -1;
		}
		cout << x << " " << y << "\n";
    }    
    return 0;
}