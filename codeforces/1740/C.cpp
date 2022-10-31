//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

template<class T> bool umin (T &a, T b) {return a > b ? (a = b, true) : false; }
template<class T> bool umax (T &a, T b) {return a < b ? (a = b, true) : false; }

void solve() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    int ans = a[n - 1] - a[0];
    for (int i = 0; i + 2 < n; i++) {
        umax(ans, a[n - 1] - a[i] + a[i + 1] - a[i]);
    }
    for (int i = n - 1; i >= 2; i--) {
        umax(ans, a[i] - a[0] + a[i] - a[i - 1]);
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }    
    return 0;
}