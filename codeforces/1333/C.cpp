//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e6 + 5;
ll v[N], w[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    map <ll, ll> mp;
    mp[0] = -1;
    cin >> n;
    for (ll i  = 0 ; i < n ; i++) cin >> v[i];
    ll now = 0, ans = 0, mx = 0;
    for (ll i = 0 ; i < n ; i++) {
        now += v[i];
        ll l;
        if (mp.find(now) != mp.end())  mx = max(mx, mp[now] + 2 * 1ll);
        if (i >= mx) ans += i - mx + 1;
        mp[now] = i;
    }
    cout << ans << '\n';
    return 0;
}