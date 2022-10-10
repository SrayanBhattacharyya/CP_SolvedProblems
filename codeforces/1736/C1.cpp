//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        ll n, i = 0, j = 0, k = 1, ans = 0;
        cin >> n;
        vector <ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        while (i < n) {
            while (j < n && k > a[i]) j++, k--;
            ans += (i - j) + 1;
            i++, k++;
        }
        cout << ans << "\n";
    }
    return 0;
}