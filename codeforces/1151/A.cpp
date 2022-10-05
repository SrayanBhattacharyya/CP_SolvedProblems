#include <bits/stdc++.h>
using namespace std;
#define ll long long

priority_queue <ll, vector<ll>, greater<ll> > pq;
vector <ll> v;
 
char s[51];
char ob[5] = "ACTG";
 
ll cal(ll o) {
	ll ret = 0;
	for (ll i = 0; i < 4; i++) {
		ret += min((ob[i] - s[i + o] + 26) % 26, (s[i + o] - ob[i] + 26) % 26);
	}
 
	return ret;
}
 
int main() {
	ll n;
	cin >> n;
	scanf("%s", s);
	for (ll i = 0; i < n; i++)
		s[i] -= 'A';
 
	for (ll i = 0; i < 4; i++)
		ob[i] -= 'A';
 
	ll miv = 1e9;
	for (ll i = 0; i < n - 3; i++) miv = min(miv, cal(i));
    cout << miv << "\n";
}