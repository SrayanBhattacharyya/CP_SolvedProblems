//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ll INF = 1e18;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(0);
    ld x, y;
    cin >> x >> y;
    ld l, r;
    cin >> l >> r;
    vector <ld> v1, v2, v;
    ld z = 1, z1 = 1;
    while(z <= INF) {
        v1.push_back(z);
        z *= x;
    }
    while(z1 <= INF) {
        v2.push_back(z1);
        z1 *= y;
    }
    for (auto x : v1) {
        for(auto y : v2) {
            z = (x + y);
            if(z >= l && z <= r) {
                v.push_back(z);
            }
        }
    }
    v.push_back(l - 1);
    v.push_back(r + 1);
    sort(v.begin(), v.end());
    ld ans = 0;
    for(ll i = 1; i < v.size(); i++) {
        ans = max(ans, v[i] - v[i - 1] - 1);
    }
    cout << ans;
    return 0;
}