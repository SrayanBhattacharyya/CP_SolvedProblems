//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 502;
char a[N][N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
	while (t--){
		ll n, k, x, y;
		cin >> n >> k >> x >> y;
		for (auto c : a) *c = '.';
		--x; --y;
		for (ll i = 0; i < n; ++i){
			for (ll j = 0; j < n; ++j){
				if ((i - x + j - y) % k == 0) cout << 'X';
				else cout << '.';
			}
			cout << "\n";
		}
	}
    return 0;
}