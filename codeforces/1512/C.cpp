//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a, b; string s;
    cin >> a >> b;
	ll n = a + b;
	cin >> s;
	for (auto i : s) {
		if (i == '0') a--;
		if (i == '1') b--;
	}
	for (ll i = 0; i < n; i++) {
		if (s[n - 1 - i] == '0') {
			if (s[i] == '1') {
				cout << "-1\n";
				return;
			}
			if (s[i] == '?') {
				a--;
				s[i] = '0';
			}
		}
		if (s[n - 1 - i] == '1') {
			if (s[i] == '0') {
				cout << "-1\n";
				return;
			}
			if (s[i] == '?') {
				b--;
				s[i] = '1';
			}
		}
	}
	for (ll i = 0; i < n; i++) {
		if (s[n - 1 - i] == '?' && s[i] == '?') {
			ll cnt = 2;
			if (i == n - 1 - i)
				cnt = 1;
			if (a >= cnt) {
				s[i] = s[n - 1 - i] = '0';
				a -= cnt;
			} 
            else {
				s[i] = s[n - 1 - i] = '1';
				b -= cnt;				
			}
		}
	}
	if (a || b) {
		cout << "-1\n";
		return;
	}
	cout << s << '\n';
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