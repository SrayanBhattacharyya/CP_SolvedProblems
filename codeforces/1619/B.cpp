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
        ll n, ans = 0;
        cin >> n;
        ans = 0;
        for (ll i = 1; i * i <= n; i++) ans++;
        for (ll i = 1; i * i * i <= n; i++) ans++;
        for (ll i = 1; i * i * i <= n; i++) {
            ll pro = i * i * i;
            if (int(sqrt(pro)) * int(sqrt(pro)) == pro) ans--;
        }
        cout << ans << "\n";
    }    
    return 0;
}