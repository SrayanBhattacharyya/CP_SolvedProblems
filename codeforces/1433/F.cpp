//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, k;
	cin >> n >> m >> k;
	vector <vector <ll>> dp {1 + m / 2, vector <ll> (k, -1)};	
	dp[0][0] = 0;
	for (ll r = 0; r < n; ++r) {
		for (ll c = 0; c < m; ++c) {
		ll a;
		cin >> a;
		for (ll i = m / 2 - 1; i >= 0; --i)
			for (ll j = 0; j < k; ++j) {
				if (dp[i][j] < 0) continue;
				ll nj = (j + a) % k;
				dp[i + 1][nj] = max(dp[i + 1][nj], a + dp[i][j]);
			}
		}
		for (ll i = 1; i < (ll)(dp.size()); ++i)
		for (ll j = 0; j < k; ++j) dp[0][j] = max(dp[0][j], dp[i][j]);
	}
	cout << dp[0][0] << '\n';   
    return 0;
}