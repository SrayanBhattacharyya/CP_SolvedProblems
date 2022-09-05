//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll INF = (ll)(1e18) + 5, MN = 55;
ll n, k, dp[MN][MN], a[MN];
 
bool check(ll val){
    dp[0][0] = 1;
    for (ll i = 0; i < k; i++){
        for (ll j = 0; j < n; j++) {
            if (dp[i][j]){
                for (ll x = j + 1, sum = 0; x <= n; x++){
                    sum += a[x];
                    if ((sum & val) == val) dp[i + 1][x] = 1;
                }
            }
        }
    }
    return dp[k][n];
}
 
void clear()
{
    for (ll i = 0; i <= k; i++){
        for (ll j = 0; j <= n; j++) dp[i][j] = 0;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    ll ans = 0;
    for (ll i = 60; i >= 0; i--){
        if (check(ans + (1LL << i))) ans += (1LL << i);
        clear();
    }
    cout << ans;
    return 0;
}