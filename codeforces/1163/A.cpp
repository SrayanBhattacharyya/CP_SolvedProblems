//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e6 + 7;

set <ll> dp[N];
ll cnt[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
	if (m == 0) {cout << 1; return 0;} 
	if (m <= n / 2) cout << m;
	else cout << n - m;
    return 0;
}