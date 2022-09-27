//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double


void solve() {
	ll n, a, b;
		string s;
		vector <ll> v;
		cin >> n >> a >> b >> s;
		for (int i=0, k=1; i<s.size(); i++, k++) {
			if (i == s.size() - 1 or s[i] != s[i+1]) {
				v.push_back(k);
				k = 0;
			}
		}

		if (v.size() == 1) {
			cout << a*v[0] + b*(v[0]+1) << '\n';
			return;
		}

		ll ans = 0;
		for (int i=0; i<v.size(); i++) {
			if (!i or i == v.size()-1) {
				ans += a*v[i] + b*v[i];
			} else {
				if (i&1) {
					ans += a*(v[i]+2) + 2*b*(v[i]+1);
				} else {
					ans += min(a*v[i] + b*(v[i]-1), a*(v[i]-2) + 2*b*(v[i]-1));
				}
			}
		}

		cout << ans << '\n';
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