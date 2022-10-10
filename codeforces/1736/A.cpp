//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        ll n, s = 0, d = 0; cin >> n;
        vector <pair <ll, ll>> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i].first;
            s += v[i].first; 
        }
        for (ll i = 0; i < n; i++) {
            cin >> v[i].second;
            s -= v[i].second;
            d += (v[i].first != v[i].second);
        }
        s = abs(s) + 1;
        cout << min (s, d) << "\n";
    }
    return 0;
}