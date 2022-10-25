//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f (ll n , ll x){
    for(ll i = x + 1; i * i <= n; i ++) if(n % i == 0) return i;
    return n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll k = max(a , max(b , c));
        ll s = 3 * k - a- b - c;
        if(n >= s && (n - s) % 3 == 0)  cout << "YES\n";
        else cout << "NO\n";
    }    
    return 0;
}