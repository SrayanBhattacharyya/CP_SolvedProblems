//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 998244353;

ll cnt[20];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n, l = 0, mx;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;
        for(ll i = 0; i < n; i++) {
            fill(cnt, cnt + 10, 0);
            for(ll j = 0; j < 200; j++) {
                if(i + j >= n) break;
                cnt[s[i + j] - '0']++;
                l = 0;
                mx = 0;
                for(ll k = 0; k < 10; k++) {
                    mx = max(mx, cnt[k]);
                    l += bool(cnt[k]);
                }
                if(mx == 11) break;
                if(mx <= l) ans++;
            }
        }
        cout << ans << "\n";
    }    
    return 0;
}