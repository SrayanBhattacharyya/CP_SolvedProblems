#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 105;
ll n, a[N];

void solve() {
    cin >> n;
	ll c0 = 0;
	ll c1 = 0;
	for (ll i = 1; i < n + 1; i++) {
		cin >> a[i];
		c0 += abs(a[i]) % 2 == 0;
		c1 += abs(a[i]) % 2 == 1;
	}
	c1 %= 4;
	c0 %= 2;

	bool bob = 0;
	bob |= c1 == 1 && c0 == 0;
	bob |= c1 == 2;

	cout << (bob ? "Bob\n" : "Alice\n");
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