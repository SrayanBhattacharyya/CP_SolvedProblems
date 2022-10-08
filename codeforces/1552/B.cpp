//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 50000 + 10;
ll a[N][6];
 
bool cmp(ll i, ll j) {
    ll cnt = 0;
    for (ll k = 1; k <= 5; k++) {
        cnt += a[i][k] < a[j][k];
    }
    return cnt >= 3;
}
 
ll solve(ll l, ll r) {
    if (l == r) return l;
    ll m = (l + r) / 2;
    ll l1 = solve(l, m);
    ll r1 = solve(m + 1, r);
    if (l1 == -1 || r1 == -1) return l1 + r1 + 1;
    else {
        if (cmp(l1, r1)) return l1;
        else return r1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++) {
            for (ll j = 1; j <= 5; j++) {
                cin >> a[i][j];
            }
        }
        ll ans = solve(1, n);
        if (ans != -1) {
            for (ll i = 1; i <= n; i++) {
                if (i != ans && cmp(i, ans)) {
                    ans = -1;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }    
    return 0;
}