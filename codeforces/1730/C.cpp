//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 10;
ll a[N];
vector <ll> vis, grad;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        set <char> found;
        multiset <char> ans;
        string s; cin >> s;
        ll n = s.size();
        for (ll i = n - 1; i >= 0; i--) {
            ll v = s[i] - '0';
            found.insert(s[i]);
            if(*found.begin() != s[i]) ans.insert(char(min(v + 1, 9ll) + '0'));
            else ans.insert(s[i]);
        }
        for(auto it : ans) cout << it;
        cout << "\n";
    }    
    return 0;
}