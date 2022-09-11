//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll M = 2e5;
const ll N = 1e7;
const ll inf = 1e8;

ll t[M + 10], n;
ll last[N + 1];
ll last1[N + 1];
pair <ll,ll> dp[M + 10][21];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	for(ll i = 2; i <= N; i++)if(!last[i]){
        last[i] = i;
        for(ll j = i * i; j <= N; j += i)last[j] = i;
    }
    ll tc = 1;
    cin >> tc;
    while (tc--){
		ll k, x, p, f;
		cin >> n >> k;

		vector <ll> a(n + 1);

		for(ll i = 1; i <= n; i++){
			t[i] = inf;
		}

		for(ll i = 1; i <= n; i++){
			cin >> x;
			a[i] = 1;
			while(x != 1){
				p = last[x];
				f = 0;
				while(x % p == 0){
					f ^= 1;
					x /= p;
				}
				if(f)a[i] *= p;
			}
			last1[a[i]] = 0;
		}

		ll l = 1, ans = 1;

		for(ll j = 0; j <= k; j++){
			dp[1][j] = {1, 1};
		}

		last1[a[1]] = 1;

		for(ll i = 2; i <= n; i++){
			for(ll j = 0; j <= k; j++){
				dp[i][j] = {inf, inf};
			}

			for(ll j = 0; j <= k; j++){
				if(dp[i - 1][j].second <= last1[a[i]]){
					dp[i][j + 1] = min(dp[i][j + 1], dp[i - 1][j]);
					dp[i][j] = min(dp[i][j], {dp[i - 1][j].first + 1, i});
				}else{
					dp[i][j] = min(dp[i][j], dp[i - 1][j]);
				}
			}

			last1[a[i]] = i;
		}

		ans = inf;

		for(ll i = 0; i <= k; i++){
			ans = min(ans, dp[n][i].first);
		}

		cout << ans << "\n";
    }    
    return 0;
}