//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 3;
 
void solve(){
    string s;
    cin >> s;
    ll n = (ll)s.size();
    vector<vector<ll>> cache(n, vector<ll>(n, -1));
    auto dp = [&] (ll L, ll R, auto&& dp) -> ll {
        if (R - L + 1 == 2) return s[L] == s[R] ? 2 : 0;
        if (cache[L][R] != -1) return cache[L][R];
        vector<ll> opt1(3);{
            vector<ll> opt2(3);
            // bob choose from L
            {   
                ll res = dp(L + 2, R, dp);
                if (res == 1) opt2[1] = true;
                else if (res == 2) {
                    if (s[L + 1] == s[L]) opt2[2] = true;
                    else if (s[L + 1] > s[L]) opt2[0] = true;
                    else opt2[1] = true;
                }
                else opt2[0] = true;
            }
            // bob choose from R
            {
                ll res = dp(L + 1, R - 1, dp);
                if (res == 1) opt2[1] = true;
                else if (res == 2) {
                    if (s[R] == s[L]) opt2[2] = true;
                    else if (s[R] > s[L]) opt2[0] = true;
                    else opt2[1] = true;
                }
                else opt2[0] = true;
            }
            if (opt2[1]) opt1[1] = true;
            else if (opt2[2]) opt1[2] = true;
            else opt1[0] = true;

        }
        // alice choose from R
        {
            vector<ll> opt2(3);
            // bob choose from L
            {
                ll res = dp(L + 1, R - 1, dp);
                if (res == 1) opt2[1] = true;
                else if (res == 2) {
                    if (s[L] == s[R]) opt2[2] = true;
                    else if (s[L] > s[R]) opt2[0] = true;
                    else opt2[1] = true;
                }
                else opt2[0] = true;
            }
            // bob choose from R
            {
                ll res = dp(L, R - 2, dp);
                if (res == 1) opt2[1] = true;
                else if (res == 2) {
                    if (s[R] == s[R - 1]) opt2[2] = true;
                    else if (s[R] < s[R - 1]) opt2[0] = true;
                    else opt2[1] = true;
                }
                else opt2[0] = true;
            }
            if (opt2[1]) opt1[1] = true;
            else if (opt2[2]) opt1[2] = true;
            else opt1[0] = true;

        }
        ll res = -1;
        if (opt1[0]) res = 0;
        else if (opt1[2]) res = 2;
        else res = 1;
        return cache[L][R] = res;
    };
    ll res = dp(0, n - 1, dp);
    if (res == 0) cout << "Alice\n";
    else if (res == 1) cout << "Bob\n";
    else cout << "Draw\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}