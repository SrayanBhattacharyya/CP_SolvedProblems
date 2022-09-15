//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e7 + 5;
ll ans[N], sum[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	for(ll i = 1; i <= N; i++){
        for(ll j = i; j <= N; j += i) sum[j] += i;
    }
    memset(ans, -1, sizeof(ans));
    for(ll i = 1; i <= N; i++){
        if(sum[i] > N) continue;
        else if(ans[sum[i]] < 0) ans[sum[i]] = i;
    }
    ll t; cin >> t;
    while (t--){
        ll c; cin >> c;
		cout << ans[c] << "\n";
    }
    return 0;
}