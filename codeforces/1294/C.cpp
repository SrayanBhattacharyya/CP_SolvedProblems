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
        ll n , a , b , c;
        cin >> n;
        a = f(n , 1);
        b = f(n / a , a);
        c = n / (a * b);
        if(a > 1 && b > a && c > b) cout << "YES\n" << a << " " << b << " " << c << "\n";
        else cout << "NO\n";
    }    
    return 0;
}