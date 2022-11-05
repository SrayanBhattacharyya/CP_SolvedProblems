//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 5, mod = 998244353;

ll n, a[N], sum[N], k;

ll sm(ll le, ll ri) {
	return ((ri * (ri + 1))/2  - (le * (le + 1))/2);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for (ll i = 1; i < k; i++) {
        cout<<0<<" ";
    }
    cout<<1<<" ";
    vector <ll> dp = vector <ll> (n + 1, 0);
    vector <ll> dp1 = vector <ll> (n + 1, 0);
    dp[k] = 1;
	for (ll j = 0; j <= 650; j++) {
		for (ll i = sm(k, k + j); i <= n; i++) {
		    if (j == 0 && i == k) continue;
    		if (i - (k + j) >= 0) dp[i] += dp[i - (k + j)];
    		if (i - (k + j) >= 0 && j - 1 >= 0) dp[i] += dp1[i - (k + j)];
    		dp[i] %= mod;
    		sum[i] += dp[i];
    		sum[i] %= mod;
		}
		dp1 = dp;
		dp = vector <ll> (n + 1, 0);
	}
    for (ll i = k + 1; i <= n; i++) {
    	cout<<sum[i]<<" ";
	}
    return 0;
}