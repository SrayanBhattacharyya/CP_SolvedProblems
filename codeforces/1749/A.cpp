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
		ll n, m; cin >> n >> m;
		for (int i = 0; i < m; i++) {
			ll x, y; cin >> x >> y;
		}
		if (n > m) cout << "YES\n";
		else cout << "NO\n";
    }    
    return 0;
}