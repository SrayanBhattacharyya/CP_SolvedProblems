//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 5;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
		ll n; cin >> n;
        for (ll i = 1; i < n + 1; i++) cin >> a[i];
		ll x = 1;
		for (ll i = 2; i < n + 1; i++) if(a[i] % 2 == a[1] % 2) x = i;
		cout << n - 1 << "\n";
		for (ll i = 1; i < x; i++) if (a[i] % 2 == a[1] % 2) cout << i << " " << x << "\n";
		for (ll i = 2; i < n + 1; i++) if (a[i] % 2 != a[1] % 2) cout << 1 << " " << i << "\n";
    }    
    return 0;
}