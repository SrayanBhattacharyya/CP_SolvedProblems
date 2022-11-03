//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e6 + 10;
ll a[N], s[N], x;

void solve() {
    ll n; cin >> n;
    cin >> x;
    for (ll i = 0; i <= x; ++i)	a[x] = 0;
    for (ll i = 1; i <= n; ++i) {
        ll t; cin >> t;
        if (t < x) a[t]++;
    }
    for (ll i = 0; i < x; ++i) {
        while(a[i] >= i + 1) a[i + 1]++, a[i] -= i + 1;
        if (a[i]) {cout << "No\n"; return;}
    }
    {cout << "Yes\n"; return;}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    //cin >> tc;
    while (tc--){
        solve();
    }    
    return 0;
}