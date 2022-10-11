//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector <ll> a(n), b(n + 1, 0);
    for (ll i = 0; i < n; i++) cin >> a[i];
    b[0] = a[0];
    b[n] = a[n - 1];
    for (ll i = 1; i < n; i++) b[i] = (a[i - 1] * a[i]) / __gcd(a[i - 1], a[i]);
    for (ll i = 0; i < n; i++) {
        if (a[i] != __gcd(b[i], b[i + 1])){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}