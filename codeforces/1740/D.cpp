//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector <ll> a(k);
    for (auto &i : a) {
        cin >> i;
        --i;
    }
    vector <ll> have(k);
    ll cnt = 0;
    for (ll i = k - 1, j = 0; i >= 0; i--) {
        while (!have[i]) {
            have[a[j]] = 1;
            ++j;
            ++cnt;
        }
        if (cnt >= n * m - 2) {
            cout << "TIDAK\n";
            return;
        }
        --cnt;
    }
    cout << "YA\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }    
    return 0;
}