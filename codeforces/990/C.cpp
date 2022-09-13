//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair <ll, ll> pll;

pair <ll, ll> solve(string s) {
    int lo = 0;
    int p  = 0;
    for (char c : s) {
        if (c =='(') p++;
        else p--;
        lo = min(lo, p);
    }
    return {lo, p};
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
	map <ll, ll> m;
	for (ll i = 0; i < n; i++){
		string s; cin >> s;
        pll p = solve(s);
        if (p.second >= 0) {
            if (p.first >= 0) m[p.second]++;
        } else {
            if (p.first == p.second) m[p.second]++;
        }
	}
	ll ans = 0;
    for (pll p: m) {
        if (p.first >= 0) {
            ans += (0LL+p.second)*m[0-p.first];
        }
    }
    cout << ans;
	return 0;
}