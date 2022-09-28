//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sq (ll x) {return x * x;}

bool solve() {
    ll ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    ll d1 = ax - bx, d2 = ay - by;
    ll d3 = bx - cx, d4 = by - cy;
    ll dab = sq(d1) + sq(d2);
    ll dbc = sq(d3) + sq(d4);
    if(dab != dbc) return false;
    if(d1 * d4 == d2 * d3) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (solve()) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}