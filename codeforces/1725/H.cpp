//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    string ans(n, '0');
    ll cnt = 0;
    for (ll i = 0; i < n; i++){
        ll x; cin >> x;
        if (x % 3 == 0 || n / 2 + cnt == i) {
            ans[i] = '1';
            ++cnt;
        }
        if (cnt > n / 2) ans[i] = '0';
    }
    cout << (cnt <= n / 2 ? 0 : 2) << "\n" << ans << "\n";
    return 0;
}