#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;

		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}

		vector <int> cnt(n + 1, 0);
		for(int i = 0; i < n; i++) {
			cnt[a[i]]++;
		}

		vector <int> mp(n + 1, 0);
		for(int i = 1; i <= n; i++) {
			if(cnt[i] == 0) continue;
			mp[cnt[i]]++;
		}

		vector <vector<int>> v(n + 1);
		for(int i = 0; i < n; i++) {
			v[a[i]].push_back(i);
		}

		vector <int> p, w;
		for(int i = 1; i <= n; i++) {
			if(cnt[i] == 0) continue;

			if(cnt[i] < k) {
				p.push_back(i);
			}
			else {
				w.push_back(i);
			}
		}

		vector <int> res(n, -1);
		int curr = 0;

		int rem = n;
		for(int i = k; i <= n; i++) {
			rem -= mp[i] * i;
		}
		rem = (rem / k) * k;

		for(int &x : p) {
			for(int &ind : v[x]) {
				if(rem == 0) break;
				rem--;

				res[ind] = curr;
				curr = (curr + 1) % k;
			}
		}		

		for(int &x : w) {
			int val = k;
			assert(curr == 0);

			for(int &ind : v[x]) {
				if(val == 0) break;
				val--;

				res[ind] = curr;
				curr = (curr + 1) % k;
			}
		}

		for(int &x : res) {
			cout << x + 1 << ' ';
		}
		cout << '\n';
	}
}