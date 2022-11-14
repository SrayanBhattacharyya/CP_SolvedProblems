//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	ll n, m; cin >> n >> m; 
	vector <ll> a(n);
	for (auto &x : a) cin >> x;
	a.emplace_back(m + 1); n = a.size();
	vector <ll> s, F(n, -1), R(n, -1), L(n, -1);
	for (ll i = n - 1; i >= 0; i--) {
		while (s.size() && a[s.back()] <= a[i]) s.pop_back();
		if (s.size()) F[i] = s.back();
		s.push_back(i);
		if (F[i] != -1) {
			R[i] = L[F[i]];
			L[F[i]] = i;
		}
	}
	vector <array <ll, 2>> order(n);
	for (ll i = 0; i < n; i++) order[i] = {a[i], -i};
	ranges::sort(order);
	const ll MOD = 1e9 + 7;
    vector <vector <ll>> dp(n, vector <ll> (m + 2));
    vector <vector <ll>> pf(n, vector <ll> (m + 3));
    ll first = -order[0][1];
    for(ll i = 1; i <= m; i++) dp[first][i] = 1;
    pf[first][0] = 0;
    pf[first][1] = 0;
    for (ll i = 1; i <= m; i++) pf[first][i + 1] = pf[first][i] + dp[first][i];
	for (ll iOrder = 1; iOrder < order.size(); iOrder++){
		auto [y ,i] = order[iOrder];
		i *= -1;
		for (ll j = 1; j <= m + 1; j++){
			ll LVal, RVal;
			if (L[i] == -1) LVal=1;
			else LVal = pf[L[i]][j];
			if (R[i] == -1) RVal=1;
			else RVal = pf[R[i]][j + 1];
			dp[i][j] = LVal * RVal;
			dp[i][j] %= MOD;
		}
		pf[i][0] = 0;
		pf[i][1] = 0;
		for (ll j = 1; j <= m + 1; j++){
			pf[i][j + 1] = pf[i][j] + dp[i][j];
			pf[i][j + 1] %= MOD;
		}
    }
    cout << dp[n - 1][m + 1] << '\n';
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