#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		string s;
		cin >> s;
		vector<char> c(51);
		bool ans = true;
		for (int i = 0; i < n; i++) {
			if (!c[a[i]]) {
				c[a[i]] = s[i];
			} else {
				if (c[a[i]] != s[i]) {
					ans = false;
				}
			}
		}
		cout << (ans ? "YES" : "NO") << '\n';
	}
}    