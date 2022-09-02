//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5 + 10;
ll a[N], b[N];

bool solve(){
	ll n; cin >> n;
	for (ll i = 0 ; i < n ; ++ i) cin >> a[i];
    for (ll i = 0 ; i < n ; ++ i) cin >> b[i];
    for (ll i = 0 ; i < n ; ++ i) {
        ll mxnxt = b[(i + 1) % n];
        if (a[i] > b[i]) return false;
        if (b[i] > mxnxt + 1 && a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll t; cin >> t;
	while (t--){
		cout << (solve() ? "YES" : "NO") << '\n';
	}
    return 0;
}