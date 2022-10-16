#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        vector <ll> a(n), b(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        ll cnt = 0;
        for (ll i = 0; i < n; i++) {
            if (a[i] != b[i]) cnt++;
        }
        cout << cnt / 2 << "\n";
    }
}

