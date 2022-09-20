//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 5;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
		ll n, x, y; cin >> n >> x >> y;
		if (x > 0 && y > 0) {
			cout << -1 << "\n";
			continue;
		}
		if (x == 0 && y == 0) {
			cout << -1 << "\n";
			continue;
		}
		x = max (x, y);
		if ((n - 1) % x != 0) {
			cout << -1 << "\n";
			continue;
		}
		ll p = (n - 1) / x;
		for (ll i = 0; i < p; i++) {
			for (ll j = 0; j < x; j++) cout << 2 + i * x << " ";
		}
		cout << "\n";
    }    
    return 0;
}