//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;
const ll N = 5e5 + 10;

ll modpow(ll x, ll y){
	if (y == 0) return 1;
	if (y == 1) return x;
	ll tmp = modpow(x, y / 2);
	tmp *= tmp;
	tmp %= mod;
	if (y % 2) tmp *= x, tmp %= mod;
	return tmp;
}

ll a[N], sum[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--) {
        ll n; cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        sum[0] = 1;
        for (int i = 1; i <= n; i++) {
            sum[i] = modpow(2, i);
            sum[i] += sum[i - 1];
            sum[i] %= mod;
        }
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            int cnt1 = i - 1;
            if (cnt1 >= 0) {
                ans += 1LL * a[i] * sum[cnt1];
                ans %= mod;
            }
            int cnt2 = n - i - 2;
            if (cnt2 >= 0) {
                ans -= 1LL * a[i] * sum[cnt2];
                ans %= mod;
                if (ans < 0) ans += mod;
            }
        }
        cout << ans << "\n";
    }    
    return 0;
}