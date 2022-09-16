//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n; cin >> n;
    vector <ll> a(n + 2);
    for(ll i = 0; i < n + 2; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    ll sum = 0;
    for (ll i = 0; i < n; i++) sum += a[i];
    if(sum == a[n]) {
        for (ll i = 0; i < n; i++) cout << a[i] << ' ' ; cout << '\n'; return; 
    } 
    sum += a[n];
    for (ll i = 0; i < n + 1; i++) {
        if(sum - a[i] == a[n + 1]) {
            for(ll j = 0; j <=n ; ++j) if(i != j) cout << a[j] << ' ';
            cout << '\n';
            return;
        }
    }
    cout << "-1\n";
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