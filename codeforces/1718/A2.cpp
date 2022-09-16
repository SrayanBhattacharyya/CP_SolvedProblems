//Srayan Bhattachrayya JU EE
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
        vector <ll> v(n);
        for (auto &i : v) cin >> i;
        ll val = 0;
        ll ans = n;
        set <ll> vals;
        vals.insert(val);
        for (ll i = 0; i < n; i++) {
            val ^= v[i];
            if (vals.count(val) == 0) {} 
            else {
                ans--;
                vals.clear();
                val = 0;			
            }
            vals.insert(val);
        }
        cout << ans << '\n';
    }    
    return 0;
}