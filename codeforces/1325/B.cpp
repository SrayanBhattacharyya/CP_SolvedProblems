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
        set <ll> S;
        for(ll i = 1; i <= n; ++i) {
            ll x; cin >> x;
            S.insert(x);
        }
        cout << S.size() << "\n";
    }    
    return 0;
}