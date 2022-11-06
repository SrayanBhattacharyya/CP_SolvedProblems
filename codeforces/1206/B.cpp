//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 10;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	ll zeros = 0, ans = 0, pro = 1;
	for (int i = 0; i < n; ++i) {
		if (a[i] < 0) {
			ans += -1 - a[i];
			pro *= -1;
		} 
		else if (a[i] == 0) zeros++;
		else {
			ans += a[i] - 1;
			pro *= 1;
		}
	}
	if (zeros) cout << ans + zeros;
	else if (pro == -1) cout << ans + 2;
	else  cout << ans;
	return 0;
}