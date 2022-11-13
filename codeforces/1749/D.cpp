//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 998244353;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
    ll ans = 0, pw = 1, cur = 1, f = 1;
    for (ll i = 1; i <= n; ++i){
        bool fl = true;
        for (ll j = 2; j * j <= i; ++j) if (i % j == 0) fl = false;
        if (fl && f <= m)f *= i;
        cur = cur * ((m / f) % MOD) % MOD;
        pw = pw * (m % MOD) % MOD;
        ans = (ans + pw - cur + MOD) % MOD; 
    }
    cout << ans << '\n';
    return 0;
}