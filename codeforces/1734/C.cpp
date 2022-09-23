//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll n; cin >> n;
		string s; cin >> s;
		string t = s; 
		ll ans = 0;
		vector <ll> used(n);
		for (ll i = 0; i < n; i++) {
			ll k = i + 1, mul = 1;
			while (k * mul <= n) {
				if (s[k * mul - 1] == '0') {
					if (!used[k * mul - 1]) ans += k;
					used[k * mul - 1] = 1;
				}
				else break;
				mul++;
			}
		}
		cout << ans << "\n";
    }    
    return 0;
}