#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k, temp = 0, dist = 0; 
        cin >> n >> k;
        vector <ll> a(n), count(2);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            count[a[i]]++;
        }
        if (count[0] == n) cout << "NO\n";
        else cout << "YES\n";
    }
}

