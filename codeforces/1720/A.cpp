#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 10;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x = a * d, y = b * c;
        if (x == y) cout << "0\n";
        else if (y != 0 && x % y == 0 || x != 0 && y % x == 0) cout << "1\n";
        else cout << "2\n";
    }    
    return 0;
}