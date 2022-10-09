//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll x1, x2, y1, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ll x, y;
    if (x1 == x2) x = x2;
    else if (x1 == x3) x = x1;
    else {assert(x2 == x3); x = x2;}
    if (y1 == y2) y = y2;
    else if (y1 == y3) y = y1;
    else {assert(y2 == y3); y = y2;}        
    map <pair <ll,ll>, set <pair<ll,ll>>> mp;
    mp[{1, 1}] = {{1, 1}, {1, 2}, {1, 3}, {2, 1}, {3, 1}};
    mp[{1, n}] = {{1, n}, {1, n - 1}, {1, n - 2}, {2, n}, {3, n}};
    mp[{n, 1}] = {{n, 1}, {n, 2}, {n, 3}, {n - 1, 1}, {n - 2, 1}};
    mp[{n, n}] = {{n, n}, {n - 1, n}, {n - 2, n}, {n,n - 1}, {n, n - 2}};
    ll r, c; cin >> r >> c;
    pair <ll,ll> p = {r,c};
    if (mp.find({x, y}) != mp.end()){
        bool ans = (x == r) || (y == c);
        if (ans) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        return;
    }
    bool ans = ((abs(x - r)) % 2 == 0) || ((abs(y - c)) % 2 == 0);
    if (ans) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}