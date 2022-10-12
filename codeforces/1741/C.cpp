//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll INF = 1e18;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        ll n;
        cin >> n;
        ll sum = 0;
        vector <ll> arr(n);
        for (ll &i : arr) cin >> i, sum += i;
        ll ans = INF;
        for (ll k = 1; k <= n; ++k) if(sum % k == 0) {
            ll num = 0, val = sum / k, cur = 0, pos = 0;
            for (ll i = 0; i < n; ++i) {
                cur += arr[i];
                if(cur == val){
                    num = max(num, i - pos + 1);
                    pos = i + 1;
                    cur = 0;
                }
            }
            if(cur == 0) ans = min(ans, num);
        }
        cout << ans << '\n';
    }
    return 0;
}