#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
		ll n; cin >> n;
		vector <ll> a(n);
		for (ll &x: a) cin >> x;
		ll last_len = 0, cur_len = 0, cur = a[0], ans = 0;
		for (ll x : a) {
			if (x == cur) cur_len++;
			else {
				last_len = cur_len;
				cur_len = 1;
				cur = x;
			}
			ans = max(ans, min(cur_len, last_len));
		}
		cout << ans * 2 << "\n";
    }    
    return 0;
}