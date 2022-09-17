//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 5e3 + 5;
ll x[N], cnt[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        if (b < a) b += n;
        if (cnt[a]) x[a] = min(x[a], b - a);
		else x[a] = b - a;
		cnt[a]++;
    }
    for (ll i = 1; i < n + 1; i++) x[i] = (cnt[i] - 1) * n + x[i];
    for (ll i = 1; i < n + 1; i++) {
        ll ans = 0;
        for (ll j = 1; j < n + 1; j++) {
            ll k = j;
            if (j < i) k = j + n;
            ans = max(ans, x[j] + k - i);
        }
        cout << ans << " ";
    }
    return 0;
}