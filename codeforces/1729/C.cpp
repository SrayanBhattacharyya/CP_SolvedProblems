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
    while (t--){
        string s; cin >> s;
        ll n = s.size();
        vector <vector <ll>> a(26);
        for (ll i = 0; i < n; i++) a[s[i] - 'a'].emplace_back(i);
        ll start = s[0] - 'a', end = s[n - 1] - 'a';
        ll deg = start < end ? 1 : -1;
        vector <ll> ans;
        cout << abs(end - start) << " ";
        for (ll i = start; i != end + deg; i += deg) for (auto j : a[i]) ans.emplace_back(j + 1);
        cout << ans.size() << "\n";
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }    
    return 0;
}