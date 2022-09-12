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
        vector <ll> b(n);
        vector <ll> diff(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];
        for (ll i = 0; i < n; i++) diff[i] = b[i] - a[i];
        sort (diff.begin(), diff.end());
        ll ans = 0;
        for (ll i = 0, j = n - 1; i < j; ){
            if (diff[i] + diff[j] >= 0){
                ans++;
                i++; j--;
            }
            else i++;
        }
        cout << ans << "\n";
    }    
    return 0;
}