//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll x = 0;
        string s;
        cin >> s;
        for (ll i = 0; i < s.size(); i++){
            if (s[i]=='Q') x++;
            else x--;
        	if (x < 0) x = 0;
        }
        if (x > 0) cout << "NO\n";
        else cout << "YES\n";
    }    
    return 0;
}