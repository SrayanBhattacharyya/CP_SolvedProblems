#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		vector <ll> cnt(26, 0);
		for (auto c : s) cnt[c-'a']++;
		string ans = "";
		for(ll p = 1; p <= k; p++) {
			ll rem = n/k;
			ll i = 0;
			for( i = 0; i < 26; i++) {
				if(rem == 0) break;
				if(cnt[i] == 0) break;
				rem--;
				cnt[i]--;
			}
			ans += (char)(i + 'a');
		}
		cout << ans << "\n";
    }    
    return 0;
}