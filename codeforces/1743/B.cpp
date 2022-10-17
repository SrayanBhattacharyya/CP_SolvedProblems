#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t; 
    while (t--){
        ll n; cin >> n;
        vector <ll> a(n);
        ll k = 1;
        for (ll i = 0; i < n; i += 2) a[i] = k++;
        k = n;
        for (ll i = 1; i < n; i += 2) a[i] = k--;
        for (auto &x : a) cout << x << " ";
        cout << "\n";
    }    
    return 0;
}