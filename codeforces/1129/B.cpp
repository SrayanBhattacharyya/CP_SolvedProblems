//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 5e3 + 5;
ll x[N], cnt[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll k; cin >> k;
    ll n = 2000;
    for (ll i = 0; i <= 1e+6; ++i) {
        if ((k + i) % n == 0) {
            ll z = (k + i) / n;
            z = i - z;
            if (z > 0) {
                cout << n << "\n";
                for (ll i = 0; i < n - 2; ++i) cout << 0 << ' ';
                cout << -z << ' ' << i << "\n";
                return 0;
            }
        }
    }
    return 0;
}