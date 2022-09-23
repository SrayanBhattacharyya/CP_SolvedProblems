//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll n; cin >> n;
		vector <ll> a(n);
		for (ll i = 0; i < n; i++) cin >> a[i];
		sort (a.begin(), a.end());
		ll ans = -1;
		for(ll i = 1; i + 1 < n; i++) {
			ll now = (a[i] - a[i - 1]) + (a[i + 1] - a[i]);
			if (ans == -1 || now < ans) ans = now;
		}
		cout << ans << "\n";
    }    
    return 0;
}