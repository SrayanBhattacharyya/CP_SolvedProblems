#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n;
        char c;
        string s;
        cin >> n >> c >> s;
        ll cl;
        for(ll i = 0;i < n;i++) {
            if(s[i] == 'g'){
                cl = i+n;
                break;
            }
        }
        ll ans = 0;
        for(ll i = n-1;i >= 0;i--){
            if(s[i] == 'g')cl = i;
            if(s[i] == c) ans = max(ans, cl-i);
        }
        cout << ans << '\n';
    }    
    return 0;
}