//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll n, m, a, b; cin >> n >> m >> a >> b;
	ll rem = n % m;
	if (rem == 0) cout << "0" << "\n";
	else {
		ll val = min (rem * b, (m - rem) * a);
		cout << val << "\n";
	}
	return 0;
}