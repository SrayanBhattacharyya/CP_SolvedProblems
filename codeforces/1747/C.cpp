//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector <ll> a(n);
    ll st;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) st = a[i];
    }
    sort (a.begin(), a.end());
    if (st <= a[0])  cout << "Bob\n";
    else cout << "Alice\n";
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