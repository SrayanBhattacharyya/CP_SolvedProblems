#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector <ll> v(n);
    multiset <ll> Sg;
    for (auto &i : v) cin >> i, Sg.insert(i);
    for (int k = n; k >= 1; k--) {
        multiset <ll> S = Sg;
        bool ok = true;
        for (int j = 1; j <= k; j++) {
            ll req = k - j + 1;
            auto it = S.upper_bound(req);
            if (it == S.begin()) {
                ok = false;
                break;
            } 
            else {
                it--;
                S.erase(it);
                if (S.size()) {
                    S.insert(*S.begin() + req);
                    S.erase(S.begin());
                }
            }
        }
        if (ok) return void(cout << k << '\n');
    }
    cout << 0 << '\n';
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