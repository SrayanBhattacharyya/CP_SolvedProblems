//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
		ll n, m;
		cin >> n >> m;
		vector <vector <ll>> a (n, vector <ll> (m));
		vector <vector <ll>> b (n, vector <ll> (m, 0));
		for(ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> a[i][j];
		vector <pair<ll,ll>> ans;
		for(ll i = 0; i < n - 1; i++) {
			for(ll j = 0; j < m - 1; j++) {
				if(a[i][j] == 1 and a[i][j + 1] == 1  and a[i + 1][j] == 1 and a[i + 1][j + 1] == 1) {
					b[i][j] = 1;
					b[i + 1][j] = 1;
					b[i][j + 1] = 1;
					b[i + 1][j + 1] = 1;
					ans.push_back({i, j});
				}
			}
		}
		for(ll i = 0; i < n;i++)
		{
			for(ll j = 0; j < m; j++)
				if(a[i][j] != b[i][j]) {
					cout << -1;
					return 0;
				}
		}
		cout <<  ans.size() << "\n";
		for (auto it : ans) cout << it.first + 1 << " " << it.second +1 << "\n";
	}    
    return 0;
}