//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m, k; cin >> n >> m >> k;
    vector <ll> v(k);
    for (ll i = 0; i < k; i++) cin >> v[k - i - 1];
    ll a, ans = 0;
    for (ll i = 0; i < n * m; i++) {
        cin >> a;
        for (ll j = 0; j < k; j++) {
            if (v[j] == a) {
                ans += k - j;
                v.erase(v.begin() + j, v.begin() + j + 1);
                v.push_back(a);
                break;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}