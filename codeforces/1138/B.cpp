#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
		ll n;
		cin >> n;
		string s, t;
		cin >> s >> t;
		vector <ll> both, acro, clown, rest;
		for (ll i = 1; i <= n; i++) {
			if (s[i - 1] == '1' && t[i - 1] == '1') both.emplace_back(i);
			else if (s[i - 1] == '1') clown.emplace_back(i);
			else if (t[i - 1] == '1') acro.emplace_back(i);
			else rest.emplace_back(i);
		}
		ll end = min(n / 2, (ll)clown.size());
		pair <ll, pair <ll, ll>> ans = {-1, {-1, -1}};
		for (ll i = 0; i <= end; i++) {	
			ll rem = n / 2 - i;
			ll end2 = min(rem, (ll)both.size());
			for (ll j = 0; j <= end2; j++) {
				ll clowns = i + j;
				ll already = both.size() - j;
				if (already > clowns) continue;
				ll req = clowns - already;
				if (acro.size() < req) continue;
				ll nt = acro.size() - req;
				if (clowns + nt > n / 2) continue;
				ll t1 = i;
				ll t2 = j;
				ll t3 = nt;
				ll taken = n / 2 - (t1 + t2 + t3);
				if (rest.size() < taken) continue;
				ans = {nt, {i, j}}; 
			}	
		}	
		if (ans.first == -1) {
			cout << -1 << "\n";
			return 0;
		}
		ll t1 = ans.second.first;
		ll t2 = ans.second.second;
		ll t3 = ans.first;
		ll taken = t1 + t2 + t3;
		ll t4 = n / 2 - taken;
		for (ll i = 0; i < t1; i++) cout << clown[i] << ' ';
		for (ll i = 0; i < t2; i++) cout << both[i] << ' ';
		for (ll i = 0; i < t3; i++) cout << acro[i] << ' ';
		for (ll i = 0; i < t4; i++) cout << rest[i] << ' ';
		cout << "\n";
    }    
    return 0;
}