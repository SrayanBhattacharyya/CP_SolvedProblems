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
		for (ll i = 1; i <= n; i++) {
			for (ll j = 1; j <= i; j++) {
				if (j == 1 || j == i) cout << 1;
				else cout << 0;
				if (j < i) cout << ' ';
			}
			cout << '\n';
		}
    }    
    return 0;
}