//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

string arr[5][1005];
map <string, ll> cnt;
 
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        cnt.clear();
        for(ll i = 1; i <= 3; i++) {
            for(ll k = 1; k <= n; k++) {
                cin >> arr[i][k];
                cnt[arr[i][k]]++;
            }
        }
        for(ll i = 1; i <= 3; i++) {
            ll sum = 0;
            for(ll k = 1; k <= n; k++) {
                ll c = cnt[arr[i][k]];
                if(c == 1) sum += 3;
                else if(c == 2) sum++;
            }
            cout << sum << " ";
        }
        cout << "\n";
    }
}