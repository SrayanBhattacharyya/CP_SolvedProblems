//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5 + 30;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while (t--){
        ll n, ans = -1e9;
        cin >> n;
        vector <ll> a(n);
        for(auto &x: a) cin >> x;
        for(ll i = 1; i < n; i++) ans = max(ans, a[i] - a[0]);
        for(ll i = 0; i + 1 < n; i++) ans = max(ans, a[n - 1] - a[i]);
        for(ll i = 0; i < n; i++) ans = max(ans, a[(n + i - 1) % n] - a[i]);
        cout << ans << '\n';
    }
    return 0;
}