//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector <pair <pair <ll, ll>, pair <ll, ll>>> a;
vector <ll> ans;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
	a.resize(m); ans.resize(n + 1);
	ll flag = 1;
	for (ll i = 0; i < m; i++) {
		cin >> a[i].first.second >> a[i].first.first >> a[i].second.first;
    	a[i].second.second = i+1;
    	ans[a[i].first.first] = m + 1;
    	if (a[i].second.first > a[i].first.first - a[i].first.second) flag = 0;
    }
	ranges::sort(a);
	for(ll i = 0; i < m; i++){
    	ll st = a[i].first.second;
    	ll dl = a[i].first.first;
    	ll req = a[i].second.first;
    	ll v = a[i].second.second;
    	for (ll j = st; j < dl; j++) {
    		if(ans[j] == 0){
    			ans[j]=v;
    			req--;
    			if(req == 0) break;
    		}
    	}
    	if (req > 0) {
    		flag = 0;
    		break;
    	}
    }
	if (flag) for (ll i = 1; i <= n; i++) cout << ans[i] << " ";
    else cout << -1 << "\n";
    return 0;
}