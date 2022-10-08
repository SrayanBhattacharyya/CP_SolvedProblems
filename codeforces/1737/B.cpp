//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll l, r;
        cin >> l >> r;
        ll x = sqrtl(l), y = sqrtl(r);
        ll ans = (y - x - 1) * 3;
        ans += (3 - (l - x * x + x - 1) / x);
        ans += ((r - y * y ) / y + 1);
        cout << ans << "\n";
    }    
    return 0;
}