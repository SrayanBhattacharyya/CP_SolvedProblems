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
        for (auto &x : a) cin >> x;
        cout << (10 - n) * (10 - n - 1) * 3 << "\n";
    }    
    return 0;
}