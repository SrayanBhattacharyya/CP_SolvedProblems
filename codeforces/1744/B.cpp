#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		ll n, q, type, x;
        cin >> n >> q;
        vector<ll> a(n);
        for (ll j = 0; j < n; j++) cin >> a[j];
        vector <ll> sum(2, 0);
        ll c = 0; // count of even
        for (ll j = 0; j < n; j++) {
            sum[a[j] % 2] += a[j];
            c += a[j] % 2 == 0;
        }
        for (ll j = 0; j < q; j++) {
            cin >> type >> x;
            sum[type] += x * (type ? n - c : c);
            if (x % 2 != 0) {
                sum[1-type] += sum[type];
                sum[type] = 0;
                c = type ? n : 0;
            }
            cout << sum[0] + sum[1] << endl;
        }
	}
}    