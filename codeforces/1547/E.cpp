//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5+5;
ll a[N], t[N], ans[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        ll n, k;
        cin >> n >> k;
        for(ll i = 0; i <= n; i++) ans[i] = 19e8, a[i] = 0, t[i] = 0;
        for(ll i = 0; i < k; i++) cin >> a[i];
        for(ll i = 0; i < k; i++) cin >> t[a[i]];
        ll curt = 19e8;
        for(ll i = 1; i <= n; i++) {
            if(t[i] != 0) curt = min(curt, t[i]);
            ans[i] = min(ans[i], curt);
            curt++;
        }
        for(ll i = n; i > 0; i--) {
            if(t[i] != 0) curt = min(curt, t[i]);
            ans[i] = min(ans[i], curt);
            curt++;
        }
        for(ll i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}