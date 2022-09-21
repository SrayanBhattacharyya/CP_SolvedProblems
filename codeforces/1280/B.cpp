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
		ll n, m; cin >> n >> m;
		vector <string> a(n);
		for (auto &s : a) cin >> s;
		vector <ll> r(n), c(m);
		for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++){
			r[i] += a[i][j] == 'A';
            c[j] += a[i][j] == 'A';
		}
		ll sum = accumulate(r.begin(), r.end(), 0);
		if (sum == n * m) {
            cout << "0\n";
            continue;
        }
        if (sum == 0) {
            cout << "MORTAL\n";
            continue;
        }
        if (r[0] == m or r.back() == m or c[0] == n or c.back() == n) {
            cout << "1\n";
            continue;
        }
        if (a[0][0] == 'A' or a[0].back() == 'A' or a.back()[0] == 'A' or a.back().back() == 'A') {
            cout << "2\n";
            continue;
        }
		bool flag = false;
		for (ll i = 0; i < n; i++) if (r[i] == m) {
            flag = 1;
            break;
        }
		for (ll i = 0; i < m; i++) if (c[i] == n) {
            flag = 1;
            break;
        }
		if (flag) {
            cout << "2\n";
            continue;
        }
        if (r[0] > 0 or r.back() > 0 or c[0] > 0 or c.back() > 0) {
            cout << "3\n";
            continue;
        }
        cout << "4\n";
    }    
    return 0;
}