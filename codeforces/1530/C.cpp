//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 5;
ll a[N], b[N];

ll calcmax(ll n, ll a[], ll mid) {
	ll K = n + mid - (n + mid) / 4;
	ll sum = 0;
	sum += 100 * min(mid, K);
	K -= min(mid, K);
	return sum + a[n - K + 1];
}

ll calcmin(ll n, ll b[], ll mid) {
	ll K = n + mid - (n + mid) / 4;
	if (K > n) K = n;
	return b[n - K + 1];
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n; cin >> n;
		for (ll i = 1; i <= n; ++ i) cin >> a[i];
		for (ll i = 1; i <= n; ++ i) cin >> b[i];
		sort(a + 1, a + 1 + n);
		sort(b + 1, b + 1 + n);
		for (ll i = n - 1; i; -- i) {
			a[i] += a[i + 1];
			b[i] += b[i + 1];
		}
		ll l = 0, r = 4e5;
		while (r - l + 1 > 0) {
			ll mid = (l + r) >> 1;
			if (calcmax(n, a, mid) >= calcmin(n, b, mid)) r = mid - 1;
            else l = mid + 1;
		}
        cout << l << "\n";
    }    
    return 0;
}