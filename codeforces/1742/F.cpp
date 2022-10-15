#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a[26] = {}, b[26] = {};
        a[0] = b[0] = 1;
        ll x = 1, y = 1;
        ll q; cin >> q;
        while (q--) {
            ll d, k; 
            string s;
            cin >> d >> k >> s;
            if (d == 1) {
                for (auto &x : s) a[x - 'a'] += k;
                x += (s.size() * k);
            }
            else {
                y += (s.size() * k);
                for (auto &x : s) b[x - 'a'] += k;
            }
            if (y != b[0]) cout << "YES\n";
            else if (x == a[0]) {
                if (x < y) cout << "YES\n";
                else cout << "NO\n";
            }
            else cout << "NO\n";
        }
    }
}
