#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        char ans;
        ll n = 8;
        char ch[10][10];
        for(ll i = 1; i <= n; ++i) {
            for(ll j = 1; j <= n; ++j) {
                cin >> ch[i][j];
            }
        }
        for(ll i = 1; i <= n; ++i) {
            bool test = true;
            for(ll j = 1; j <= n; ++j) {
                if(ch[i][j] == 'B') test = false;
            }
            if(test) ans = 'R';
        }
        for(ll i = 1; i <= n; ++i) {
            bool test = true;
            for(ll j = 1; j <= n; ++j) {
                if(ch[j][i] == 'R') test = false;
            }
            if (test) ans = 'B';
        }
        cout << ans << '\n';
    }
}
