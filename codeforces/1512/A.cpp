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
        ll n;
		cin >> n;
		vector <ll> a(n);
		for (ll i = 0; i < n; i++) cin >> a[i];
		for (ll i = 0; i < n; i++) {
			if (a[i] != a[(i - 1 + n) % n] && a[i] != a[(i + 1) % n]) {
				cout << i + 1 << "\n";
				break;
			}
		}
    }    
    return 0;
}