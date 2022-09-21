//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1000000000LL

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll n; cin >> n;
        map <ll, pair <ll, ll>> m;
        multiset <ll> ms;
        for (ll i = 0; i < n; i++) {
            ll x, y; cin >> x >> y;
            m[x].first++;
            m[x].second += y;
        }
        vector <pair <ll, ll>> ans;
        for(auto it : m) ans.push_back(it.second);
        sort(ans.begin(), ans.end(), greater <pair <ll, ll>>());
        ll ans1 = 0, ans2 = 0, temp = INF, idx = 0;
        for (ll i = 0; i < ans.size(); i++) {
            temp = min(temp - 1, ans[i].first);
            while (idx < ans.size() && ans[idx].first >= temp){
                ms.insert(ans[idx].second);
                idx++;
            }
            ans1 += temp;
            ans2 += min (temp, * (--ms.end()));
            ms.erase(--ms.end());
            if(temp == 0) break;
        }
        cout << ans1 << " " << ans2 << "\n";
    }    
    return 0;
}