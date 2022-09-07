//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5 + 30;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;
        string s; cin >> s;
        stack <char> stk;
        ll cnt = 0, ans = 0;
        for (ll i = 0; i < 2 * n; i++){
            char x = s[i];
            if (stk.size() == 0) {
                stk.push(x);
                ans += max(cnt - 1, 0LL);
                cnt = 0;
            }
            else if (x == ')') {
                if (stk.top() == '(') {
                    stk.pop();
                    cnt++;
                }
                else{        
                    stk.push(x);
                    ans += max(cnt - 1, 0LL);
                    cnt = 0;
                }
            }
            else {
                stk.push(x);
                ans += max(cnt - 1, 0LL);
                cnt = 0;
            }
        }
        ans += max(cnt - 1, 0LL);
        cnt = 0;
        cout << ans + 1 << "\n";
    }
    return 0;
}