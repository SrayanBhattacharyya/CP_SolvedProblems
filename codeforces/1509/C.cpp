//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2096;
ll dp[N][N], ar[N];
 
ll f(ll l, ll r) {
    if (dp[l][r] >= 0) return dp[l][r];
    if (l == r) return dp[l][r] = 0;
    return (dp[l][r] = ar[r] - ar[l] + min(f(l, r - 1), f(l + 1, r)));
}
 
void solve() {
    memset(dp, 0 - 1, sizeof dp);
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    cout << f(0, n - 1) << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }    
    return 0;
}