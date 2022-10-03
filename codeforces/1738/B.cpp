#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll INF = 1e18;

void solve() {
    ll n, m;
    cin >> n >> m;
	vector<ll>S(n + 1), v(n + 1);
	for (int i = n-m+1; i <= n; i++)cin >> S[i];
	if (m == n) {
		bool ok = true;
		v[1] = S[1];
		for (int i = 2; i <= n; i++) {
			v[i] = S[i] - S[i - 1];
			if (v[i - 1] > v[i])ok = false;
		}
		if (ok)cout << "Yes";
		else cout << "No";
		cout << '\n';
		return;
	}
	else if (m == 1) {
		bool ok = true;
		if (ok)cout << "Yes";
		else cout << "No";
		cout << '\n';
		return;
	}
	bool ok = true;
	v[n - m + 1] = -INF;
	for (int i = n - m + 2; i <= n; i++) {
		v[i] = S[i] - S[i - 1];
		if (v[i - 1] > v[i])ok = false;
	}
	if ((n - m + 2)*v[n - m + 2] < S[n - m + 2])ok = false;
	if ((n - m + 1)*v[n - m + 2] < S[n - m + 1])ok = false;
	if (ok)cout << "Yes";
	else cout << "No";
	cout << '\n';
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