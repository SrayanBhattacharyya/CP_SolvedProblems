//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll INF = 1e13;
ll n, k, nx[105][26], dp[105][105], num[105];;
string s;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin >> n >> k;
	cin >> s;
	s = "#" + s;
	for (ll i = 0; i <= n; i++){
		for (ll j = 0; j < 26; j++){
			nx[i][j] = n + 1;
			for (ll k = i + 1; k <= n; k++){
				if(s[k] == 'a'+j){
					nx[i][j] = k;
					break;
				}
			}
		}
	}
	dp[0][0] = 1;
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j <= n; j++){
			for(ll k = 0; k < 26; k++){
				if (nx[i][k] == n + 1) continue;
				dp[nx[i][k]][j + 1] += dp[i][j];
				if (dp[nx[i][k]][j + 1] >= INF) dp[nx[i][k]][j + 1] = INF;
			}
		}
	}
	for(ll i = 0; i <= n; i++){
		for(ll j = 0; j <= n; j++){
			num[i] += dp[j][i];
			if(num[i] > INF) num[i] = INF;
		}
	}
	
	ll ans = 0, rem = k;
	for(ll i = n; i >= 0; i--){
		if(num[i] >= rem){
			ans += (n - i) * rem;
			rem = 0;
			break;
		}
		else{
			ans += (n - i) * num[i];
			rem -= num[i];
		}
	}
	if(rem > 0) ans = -1;
	cout << ans << "\n";
	return 0;
}