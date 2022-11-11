//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e4 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
	vector <ll> a, b;
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        a.emplace_back(x);
    }
    sort(a.begin(), a.end());
    b = a;
    reverse(b.begin(), b.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += (1LL * a[i] * b[i]) % mod;
        ans %= mod;
    }
    cout << ans;
    return 0;
}