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
		ll b, p, f;
		ll h, c;
		cin >> b >> p >> f;
		cin >> h >> c;
		ll ans = 0;
		for(ll i = 0; i <= b; i++){
			ll A = i / 2;
			ll B = (b - i) / 2;
			ll P = min(A , p) * h + min(B, f) * c;
			ans = max(P, ans);
		}
		cout << ans << "\n";
	}    
    return 0;
}