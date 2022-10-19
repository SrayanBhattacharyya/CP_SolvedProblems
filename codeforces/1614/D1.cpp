#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 5e6 + 5;
ll ans[N], cnt[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        ll mx = 0;
        for (ll i = 1; i < N; ++i) {
            for (ll j = i + i; j < N; j += i) {
            cnt[i] += cnt[j];
            }
        }
        ans[1] = n;
        for (ll i = 1; i < N; ++i) {
            for (ll j = i + i; j < N; j += i) {
            ans[j] = max(ans[j], ans[i] + cnt[j] * 1ll * j - cnt[j] * 1ll * i);
            }
            mx = max(mx, ans[i]);
        }
        cout << mx << "\n";
    }    
    return 0;
}