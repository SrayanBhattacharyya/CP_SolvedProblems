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
        ll n; cin >> n;
		map <ll, ll> mp;
		for (ll i = 0; i < n; i++){
			ll x; cin>>x;
			mp[x]++;
		}
		for (ll i=0; i<n; i++){
			ll x; cin >> x;
			mp[x]--;
		}
		ll ans = 0;
		priority_queue <pair <ll, ll>, vector <pair <ll, ll>>> pq(mp.begin(), mp.end());
		while (!pq.empty()){
			ll v = pq.top().first, s = 0;
			while (!pq.empty() && pq.top().first==v){
				s+=pq.top().second;
				pq.pop();
			}
			if (!s) continue;
			ans += abs(s);
			pq.push(make_pair(to_string(v).length(), s));
		}
		cout << ans << "\n";
    }    
    return 0;
}