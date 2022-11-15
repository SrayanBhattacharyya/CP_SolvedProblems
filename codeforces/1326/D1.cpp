//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e7 + 50;
const ll N2 = 1e7 + 10;

ll n, a[N];
char in[N2], s[N];

void manacher() {
	ll p = -1, r = -1;
	for (ll i = 0; i < n; i++) {
		if (i <= r) a[i] = min(a[2 * p - i], r - i);
		else a[i] = 0;
		while (i - a[i] - 1 >= 0 && i + a[i] + 1 < n && s[i - a[i] - 1] == s[i + a[i] + 1]) a[i]++;
		if (r < i + a[i]) r = i + a[i], p = i;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t = 1;
	cin >> t;
	while (t--){
		cin >> in;
		n = strlen(in);
		for (ll i = 0; i < n; i++){
			s[i * 2] = ' ';
			s[i * 2 + 1] = in[i];
		}
		s[n + n] = ' '; 
		n = n + n + 1;
		manacher();
		ll i = 1,j = n - 2;
		while (i < j && s[i] == s[j]) i += 2, j -= 2;
		if (i >= j) {
			cout << in << '\n';
			continue;
		}
		ll pi = -1, pj = -1;
		for (ll k = i; k <= n / 2; k++) if(k - a[k] < i) pi = k;
		for (ll k = j; k >= n / 2; k--) if (k + a[k] > j) pj = k;
		ll pos = -1, d;
		if (n / 2 - pi < pj - n / 2) pos = pi, d = pos - i;
		else pos = pj, d = j - pos;
		for (ll k = 1; k < i; k += 2) cout << s[k];
		for (ll k = pos - d; k <= pos + d; k += 2) cout << s[k];
		for (ll k = j + 2; k < n; k += 2) cout << s[k];
		cout << '\n';
	}    
	return 0;
}