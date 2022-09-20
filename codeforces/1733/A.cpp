//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e3 + 5;
ll a[N], c[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
		ll n, k; cin >> n >> k;
        for(ll i = 0; i <= k; ++i) c[i] = 0;
        for(ll i = 1; i <= n; ++i){
            cin >> a[i];
            c[i % k] = max(a[i], c[i % k]);
        }
        ll sum = 0;
        for(ll i = 0; i <= k; ++i) sum += c[i];
        cout << sum << "\n";
    }    
    return 0;
}