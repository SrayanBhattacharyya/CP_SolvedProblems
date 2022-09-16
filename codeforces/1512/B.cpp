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
        ll n;
		cin >> n;
		vector <string> s(n);
		vector <pair <ll,ll>> now;
		for (ll i = 0; i < n; i++) {
			cin >> s[i];
			for (ll j = 0; j < n; j++) if (s[i][j] == '*') now.emplace_back(i, j);
		}
		if (now[0].first == now[1].first) {
			if (now[0].first+  1< n) now[0].first++;
			else now[0].first--;
		}
		else if (now[1].second == now[0].second){
			if (now[0].second + 1 < n) now[0].second++;
			else now[0].second--;
		}
		assert((ll) now.size() == 2);
		for (ll i = 0; i < 2; i++) for (ll j = 0; j < 2; j++) s[now[i].first][now[j].second] = '*';
		for (ll i = 0; i < n; i++) cout << s[i] << "\n";
    }    
    return 0;
}