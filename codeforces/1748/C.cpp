//Srayan Bhattachrayya JU EE
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
        for (ll i = 0; i < n; i++) cin >> a[i];
        ll mx = 0, ans = 0, lst = -1, acc = 0, aux;
        map <ll, ll> m[n];
        for (ll i = 0; i < n; i++) {
            acc += a[i];
            if (a[i] == 0) {
                if (lst != -1) acc -= aux;
                ans += mx;
                lst = i;
                m[lst][acc]++;
                mx = 1;
                aux = acc;
            }
            else if (lst != -1) {
                m[lst][acc]++;
                if (m[lst][acc] > mx) {
                    mx = m[lst][acc];
                    aux = acc;
                }
            }
            else if (acc == 0) ans++;
        }
        ans += mx;
        cout << ans << '\n';
    }    
    return 0;
}