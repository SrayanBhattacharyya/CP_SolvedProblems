//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll INF = 1e18;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
	cin >> n;
	ll t = 0;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		t += x;
	}
	ll ans = -1;
	ll m;
	cin >> m;
	for (ll i = 0; i < m; i++) {
		ll a, b;
		cin >> a >> b;
		if (t >= a && t <= b) {
			ans = t;
			break;
		}
		else if (a >= t) {
			ans = a;
			break;
		}
	}
    cout << ans << "\n";
    return 0;
}