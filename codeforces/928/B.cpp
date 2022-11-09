//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e6 + 5;
ll p[N], ans[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
    for (ll i = 1; i <= n; i++) cin >> p[i];
    for (ll i = 1; i <= n; i++) {
        ans[i] = ans[p[i]];
        if (p[i] == 0) p[i] -= m;
        ll x = max(i - m - 1, min(n, p[i] + m));
        ans[i] += min(i + m, n) - x;
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}