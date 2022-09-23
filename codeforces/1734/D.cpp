//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 5;
ll n, m, a[N];

bool check() {
	ll pos = m, sum = 0, con = 0, my = 0;
	for (ll i = m; i < n + 1; i++) {
		my += a[i];
		if(my < 0) return false;
		while (pos && my >= con){
			my += sum;
			pos--;
			sum = a[pos];
			con = 0;
			while(pos > 0 && sum < 0){
				pos--;
				con = max (-sum, con);
				sum += a[pos];
			}
		}
	}
	return true;
}

void solve() {
	cin >> n >> m;
	for (ll i = 1; i < n + 1; i++) cin >> a[i];
	if (check()) cout << "YES\n";
	else {
		reverse (a + 1, a + 1 + n);
		m = n + 1 - m;
		if (check()) cout << "YES\n";
		else cout << "NO\n";
	}
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