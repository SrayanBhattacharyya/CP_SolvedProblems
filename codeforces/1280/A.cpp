//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll n; string s;
        cin >> n >> s;
        ll ans = s.size();
        for (ll i = 0; i < n; i++){
            ll N = s[i] - '1';
            ll S = s.size();
            if (N && S < n) {
                string t = s.substr(i + 1);
                for (ll j = 1; j <= N; j++) s += t;
            }
            ans  = (ans + (ans + MOD + MOD - i - 1) * N) % MOD;
        }
        cout << ans << "\n";
    }    
    return 0;
}