//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e6 + 5;
ll v[N], w[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector <ll> a(n);
        for (ll i = 0; i < n; ++i) cin >> a[i];
        vector <ll> ans (n, 1);
        vector <ll> is_zero (n, 0);
        ll pos = 0;
        while (pos < n && a[pos] == 0) {
            ans[pos] = 0;
            pos++;
        }
        ll pos2 = n - 1;
        while (pos2 >= 0 && a[pos2] == n) pos2--;
        for (ll i = pos; i < pos2; ++i) {
            if (a[i] >= n) break;
            if (!is_zero[i]) {
                is_zero[a[i]] = 1;
                ans[a[i]] = 0;
            }
            else {
                if (a[i] + i >= n) break;
                is_zero[a[i] + i] = 1;
                ans[a[i] + i] = 0;
            }
        }
        for (ll i = 0; i < n; ++i) cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}