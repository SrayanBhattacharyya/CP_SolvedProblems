//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll cnt[101] = {0};
		ll n, c; cin >> n >> c;
		for (ll i = 0; i < n; i++) {
			ll x; cin >> x;
			cnt[x]++;
		}
		ll ans = 0;
		for (ll i = 0 ; i <= 100; i++) ans += min (cnt[i], c);
		cout << ans << "\n";	
    }    
    return 0;
}