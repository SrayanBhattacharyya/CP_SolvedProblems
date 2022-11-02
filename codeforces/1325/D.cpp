//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll x, y, a, b, c;
    cin >> x >> y;
    if (x > y) {
        cout << -1;
        return 0;
    }
    if (x == 0 && y == 0) {
        cout << 0;
        return 0;
    }
    if (x == y) {
        cout << 1 << "\n" << x;
        return 0;
    }
    if ((y - x) & 1ll) {
        cout << -1;
        return 0;
    }
    for(ll i = 62; i >= 0; --i) {
        if ((x >> i) & 1ll) {
            a |= (1ll << i);
        }
    }
    ll need = (y - a);
    if (need & 1ll) {
        cout << 3 << "\n";
        cout << (y - x) << ' ' << (y - x) << ' ' << x;
        return 0;
    }
    for(ll i = 61; i >= 0; --i) {
        if (!((x >> i) & 1ll)) {
            if ((1ll << (i + 1)) <= need) {
                need -= (1ll << (i + 1));
                a |= (1ll << i);
                b |= (1ll << i);
            }
        }
    }
    if (a + b != y || (a ^ b) != x) {
        cout << 3 << "\n";
        cout << (y - x) / 2 << ' ' << (y - x) / 2 << ' ' << x;
        return 0;
    }
    cout << 2 << "\n" << a << ' ' << b ;
}