//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1000000000LL

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll p, q, b;
        cin >> p >> q >> b;
        q /= __gcd(p, q);
        ll g = __gcd(q, b);
        while(q > 1 && g > 1) {
            q /= g;
            g = __gcd(q, g);
        }
        cout << (q == 1 ? "Finite" : "Infinite") << endl;
    }    
    return 0;
}