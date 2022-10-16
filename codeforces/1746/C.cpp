#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t = 1;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        vector <ll> a(n + 1), b(n + 1);
        map <ll, ll> m;
        for (ll i = 1; i <= n; i++) {
            cin >>a[i];
            m[a[i]] = i;
        }
        for (ll i = 1; i <= n; i++) {
            b[i] = m[n - i + 1];
        }
        for (ll i = 1; i <= n; i++) cout << b[i] << " ";
        cout << "\n";
    }    
    return 0;
}