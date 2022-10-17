#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t; 
    while (t--){
        ll n; cin >> n;
        string s; cin >> s;
        vector <ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll ans = 0, mx = INT32_MIN;
        for (ll i = 0; i < n; i++) {
            if (s[i] == '1') ans += max(a[i], mx);
            if (s[i] == '0' || a[i] < mx) mx = a[i];
        }
        cout << ans << "\n";
    }    
    return 0;
}