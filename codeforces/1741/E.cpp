//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 50;
ll a[N], dp[N]; 
vector <ll> q[N];

void solve() {
    ll n; cin >> n;
    for(ll i = 1; i <=n; ++i) cin >> a[i];
    for(ll i = 0; i <= n + 10; ++i) {q[i].clear(); dp[i] = 0;}
    for(ll i = 1; i <=n; ++i) {
        ll l = i, r = a[i] + i;
        if(r <= n) q[l].push_back(r);
        l = i - a[i], r = i;
        if(l >= 1) q[l].push_back(r);
    }
    dp[1] = 1;
    for (ll i = 1; i <= n; ++i) {
        if (!dp[i]) continue;
        for(ll j : q[i]) dp[j + 1] = 1;
    }
    cout << (dp[n + 1] ? "YES":"NO") << "\n";

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}