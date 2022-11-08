//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    string a, b;
    cin >> a >> b;
    vector <ll> pref(n,0), suff(n,0);
    vector <pair <ll, ll>> ans;
    for (ll i = 0; i < n; ++i)
        if(a[i] == '1') {
            ans.push_back({i,i});
            if(i > 0) pref[i - 1] = 1;
            if(i + 1 < n) suff[i + 1] = 1;
        }
    for (ll i = n - 2; i >= 0; --i) pref[i] ^= pref[i + 1];
    for (ll i = 1; i < n; ++i) suff[i] ^= suff[i - 1];
    ll z = 0;
    for(ll i = 0; i < n; ++i){
        if (pref[i] ^ suff[i]) b[i] = (b[i] == '1' ? '0' : '1');
        z += b[i] == '0';
    }
    if(z == n || z == 0){
        cout << "YES" << "\n";
        if (z == 0) {
            ans.push_back({0, 1});
            ans.push_back({1, 1});
            ans.push_back({0, 0});
        }
        cout << ans.size() << "\n";
        for(auto [l, r] : ans)
        cout << l + 1 << " " << r + 1 << "\n";
    }
    else cout << "NO" << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}