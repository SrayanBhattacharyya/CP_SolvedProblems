//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 9;
ll p[N];
const ll mod = 998244353;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, k; cin >> n >> k;
    ll pr = -1;
    ll k1 = 0;
    ll ans = 1;
    for (ll i = 0; i < n; i++) {
        cin >> p[i];
        if (p[i] > n - k) {
            k1 += p[i];
            if (pr != -1) ans = (ans * (i - pr)) % mod;
            pr = i;
        }
    }
    cout << k1 << " " << ans;
	return 0;
}