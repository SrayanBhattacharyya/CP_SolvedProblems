//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countOnOneSide(ll val, ll y) {
	if (y <= 0) return 0LL;
	if (y > val - 1) return ((val * (val - 1)) / 2 + y - (val - 1));
	else return ((val + val - 1 - y) * y) / 2;
}

bool maxTime(ll n, ll a, ll m, ll val) {
    ll totalTimeSpent = countOnOneSide(val, m - 1) + countOnOneSide(val, n - m) + val;
    if (totalTimeSpent <= a) return true;
	else return false;
}

ll solve(ll n, ll a, ll m) {
	ll left = 1, right = a + 1;
	while (right - left > 1) {
		ll mid = (left + right) / 2;
		if (maxTime(n, a, m, mid)) left = mid;
		else right = mid;
	}
	if (maxTime(n, a, m, right)) return right;
	else return left;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, a, m; cin >> n >> a >> m;
    cout << solve(n, a, m) << "\n";
    return 0;
}