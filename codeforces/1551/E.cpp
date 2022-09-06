//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
	while (t--){
		ll n, k;
		cin >> n >> k;
		vector <ll> dp(n + 1, 0);
		for(ll i = 1; i <= n; i++) {
			ll x;
			cin >> x;
			vector <ll> new_dp(n + 1, 0);
			for(ll j = 1; j <= i; j++) {
				new_dp[j] = max(new_dp[j], dp[j]);
				if(x == j) new_dp[j] = max(new_dp[j], dp[j - 1] + 1);
				else new_dp[j] = max(new_dp[j], dp[j - 1]);
			}
			swap(dp, new_dp);
		}
		ll ans = -1;
		for(ll i = n; i > 0; i--) {
			if(dp[i] >= k) {
				ans = n - i;
				break;
			}
		}
		cout << ans << '\n';
	}
    return 0;
}