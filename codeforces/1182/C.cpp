//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair <ll, ll> P;

const ll N = 1e5 + 55;
ll n; string s[N];
vector<ll> g[N][5];

ll trans(char ch) {
	if (ch == 'a') return 0;
	if (ch == 'e') return 1;
	if (ch == 'i') return 2;
	if (ch == 'o') return 3;
	return 4;
}

bool IsVowel(char ch) {
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (ll i = 0; i < n; i++) cin >> s[i];
	for (ll i = 0; i < n; i++) {
		ll cnt = 0;
		ll last = -1;
		for (auto ch : s[i]) {
			if (IsVowel(ch)) {
				cnt++;
				last = trans(ch);
			}
		}
		g[cnt][last].push_back(i);
	}
	vector<P> res, same, diff;
	for (ll i = 1; i <= (ll)1e5; i++) {
		for (ll j = 0; j < 5; j++) {
			while (g[i][j].size() > 1) {
				ll x = g[i][j].back();
				g[i][j].pop_back();

				ll y = g[i][j].back();
				g[i][j].pop_back();

				same.push_back(P(x, y));
			}
		}
		vector<ll> vec;
		for (ll j = 0; j < 5; j++) {
			while (!g[i][j].empty()) {
				vec.push_back(g[i][j].back());
				g[i][j].pop_back();
			}
		}
		for (ll i = 0; i + 1 < (ll)vec.size(); i += 2) {
			diff.push_back(P(vec[i], vec[i + 1]));
		}
	}
	while (!diff.empty() && !same.empty()) {
		P p = diff.back(); diff.pop_back();
		P q = same.back(); same.pop_back();
		res.push_back(P(p.first, q.first));
		res.push_back(P(p.second, q.second));
	}
	while (same.size() > 1) {
		P p = same.back(); same.pop_back();
		P q = same.back(); same.pop_back();
		res.push_back(P(p.first, q.first));
		res.push_back(P(p.second, q.second));
	}
	cout << res.size() / 2 << "\n";
	for (auto p : res) cout << s[p.first] << " " << s[p.second] << '\n';

	return 0;
}
