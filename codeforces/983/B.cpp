//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1000000000LL

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    vector <ll> b(n);
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector <vector <ll>> dp(n + 1, vector <ll>(n + 1));
    for (ll i = 0; i < n; i++) dp[1][i] = b[i];
    for (ll len = 2; len <= n; len++) {
        ll d = 1;
        for (; d * 2 < len; d *= 2);
        for (ll i = 0; i + len <= n; i++) {
            dp[len][i] = dp[len - d][i] ^ dp[len - d][i + d];
        }
    }
    for (ll len = 2; len <= n; len++) {
        for (ll i = 0; i + len <= n; i++) {
            dp[len][i] = max(dp[len][i], max(dp[len - 1][i], dp[len - 1][i + 1]));
        }
    }
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r; l--;
        ll len = r - l;
        printf("%d\n", dp[len][l]);
    }
    return 0;
}