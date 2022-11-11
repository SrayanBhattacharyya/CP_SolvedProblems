//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

ll mod_pwr(ll a, ll b) { 
	if(b < 0) return 0; 
	ll res = 1; 
	while (b > 0) {
		if (b & 1) res = res * a % mod; 
		a = a * a % mod; 
		b >>= 1;
	} 
	return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
		string s; cin >> s;
		vector <vector <pair <char, ll>>> dp;
		vector <pair <char, ll>> k;
		dp.push_back(k);
		char p = '`';
		ll l = -1, r = 0, ans = 0;
		bool fl;
		for (ll i = 0; i < s.size(); i++) {
			if (s[i] == p) dp[0][l].second++;
			else {
				p = s[i];
				dp[0].push_back({p, 1});
				l++;
			}
		}
		while (dp[r].size() > 1) {
			fl = true;
			while (fl) {
				for (ll i = 1; i < dp[r].size(); i++) {
					dp[r][i].second--;
					dp[r][i - 1].second--;
					if (dp[r][i - 1].second < 1) fl = false;
				}
				if (dp[r][dp[r].size() - 1].second < 1) fl = false;
				ans++;
			}
			p = '`';
			dp.push_back(k);
			l = -1;
			for (ll i = 0; i < dp[r].size(); i++) {
				if (dp[r][i].second > 0) {
					if (dp[r][i].first == p)
					dp[r + 1][l].second += dp[r][i].second;
					else {
						p = dp[r][i].first;
						dp[r + 1].push_back({p, dp[r][i].second});
						l++;
					}
				}
			}
			r++;
		}
		cout << ans << "\n";
    }    
    return 0;
}