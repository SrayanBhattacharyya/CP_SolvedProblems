//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n; cin >> n; 
	vector <ll> a(n);
	for (auto &x : a) cin >> x;
	ll l = 1, r = 1;
	for (ll i = 1; i < n; i++) if(a[i - 1] < a[i]) l++;
	else break;
	for (ll i = n - 2; i >= 0; i--) if(a[i] > a[i + 1]) r++;
	else break;
	if (l % 2 == 0 && r % 2 == 0) cout << "Bob\n";
	else cout << "Alice\n";
	return 0;
}