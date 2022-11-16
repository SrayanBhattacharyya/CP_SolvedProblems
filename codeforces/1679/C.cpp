//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, q;
    cin >> n >> q;
    vector<ll> rows(n + 1), cols(n + 1);
    set<ll> emp_rows, emp_cols;
    for (ll i = 1; i <= n + 1; i++) {
        emp_rows.insert(i);
        emp_cols.insert(i);
    }
    for (ll i = 0; i < q; i++) {
        ll t, x, y;
        cin >> t;
        if (t == 1) {
            cin >> x >> y;
            rows[x]++;
            cols[y]++;
            if (rows[x] == 1) emp_rows.erase(x);
            if (cols[y] == 1) emp_cols.erase(y);
        }
        else if (t == 2) {
            cin >> x >> y;
            rows[x]--;
            cols[y]--;
            if (rows[x] == 0) emp_rows.insert(x);
            if (cols[y] == 0) emp_cols.insert(y);
        }
        else {
            ll x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            bool ans = false, all_rows = false, all_cols = false;
            if (*emp_rows.lower_bound(x1) > x2) all_rows = true;
            if (*emp_cols.lower_bound(y1) > y2) all_cols = true;
            if (all_rows || all_cols)ans = true;
            ans ? cout << "Yes\n" : cout << "No\n";
        }
    }
	return 0;
}