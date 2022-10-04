#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll lim = 1e5 + 5;

void solve() {
    string s1, s2;
    ll total, res = 0;
    bool isPossible = true;
    map <ll, ll> mp;
    cin >> total;
    cin >> s1 >> s2;
    for (ll i = 0; i < total; i++) {
        ll mini = min(s1[i], s2[total - 1 - i]) * lim;
        ll maxi  = max(s1[i], s2[total - 1 - i]);
        mp[maxi + mini]++;
    }
    for (auto ele : mp) {
        if (ele.second % 2 == 0) continue;
        ll ch = ele.first;
        if (ch / lim != ch % lim) {
            isPossible = false;
            cout << "NO\n";
            return;
        }
        res++;

    }
    isPossible = (res <= 1) ? true : false;
    cout << (isPossible ? "YES\n" : "NO\n");
    return;
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