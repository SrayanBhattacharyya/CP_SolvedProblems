//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e3 + 5;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll n, x, y; cin >> n >> x >> y;
		x = min (x, 2 * y);
		ll cnt = 0;
		string s; cin >> s;
		for (ll i = 1; i < n + 1; i++) a[i] = (s[i - 1] == '1');
		s.clear(); cin >> s;
		for (ll i = 1; i < n + 1; i++) a[i] ^= (s[i - 1] == '1'), cnt += a[i];
		if (cnt % 2) {
			cout << -1 << "\n";
			continue;
		}
		bool fl = 0;
		if(cnt == 2) for (ll i = 1; i < n; i++) if (a[i] && a[i + 1]) fl = 1;
		if (fl) cout << x << "\n";
		else cout << cnt / 2 * y << "\n";
    }    
    return 0;
}