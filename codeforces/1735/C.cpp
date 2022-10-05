#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
	string s; cin >> s;
	set <pair <char, char>> a;
	for (char c = 'a'; c <= 'z'; ++c) a.insert({c, c});
	vector <char> next(26, '#');
    string ans;
	for (auto c : s) {
		if (next[c - 'a'] != '#') {
			ans.push_back(next[c - 'a']);
			continue;
		}
		pair <char, char> w;
		for (auto v : a) {
			if (v.second == c) {
				w = v;
				break;
			}
		}
		a.erase(w);
		if (a.size() == 0) next[w.second - 'a'] = w.first;
		else {
			pair <char, char> g = *a.begin();
			a.erase(g);
			next[c - 'a'] = g.first;
			w.second = g.second;
			a.insert(w);
		}
		ans.push_back(next[c - 'a']);
	}
	cout << ans << "\n";
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