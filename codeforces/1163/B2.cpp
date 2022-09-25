//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e6 + 7;

set <ll> dp[N];
ll cnt[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll ans = 0;
    multiset <ll> S;
    for(ll i = 1; i <= n; i++){
    	ll x;
    	cin >> x;
    	dp[cnt[x]].erase(x);
    	if(S.find(cnt[x]) != S.end()) S.erase(S.find(cnt[x]));
    	cnt[x]++;
    	dp[cnt[x]].insert(x);
    	S.insert(cnt[x]);
    	if(S.size() == 1){
    		ans = i;
    		continue;
    	}
    	ll mini = *S.begin();
    	ll maxi = *S.rbegin();
    	ll ma = *dp[mini].begin();
    	dp[mini].erase(ma);
    	if(dp[maxi].size() * maxi == i - 1) ans = i;
    	dp[mini].insert(ma);
    	if(maxi - 1 == mini){
    		if(dp[maxi].size() == 1) ans = i;
    	}
    }
    cout << ans << "\n";   
    return 0;
}