//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector <string> a(n);
		for(ll i = 0; i < n; i++) cin >> a[i];
		auto calc = [&] (char c) -> ll {
			vector <ll> v;
			for(string &s : a) {
				ll cnt = 0;
				for(char &curr : s) {
					if(curr == c) cnt++;
					else cnt--;
				}
				v.push_back(cnt);
			}
			sort(v.begin(), v.end(), greater<ll>());
			ll ans = 0, sum = 0;
			for(ll i = 0; i < n; i++) {
				sum += v[i];
				if(sum <= 0) break;
				ans = i + 1;
			}
			return ans;
		};
 		ll ans = 0;
		for(char c : {'a', 'b', 'c', 'd', 'e'}) ans = max(ans, calc(c));
		cout << ans << '\n';
	}
}