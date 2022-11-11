//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

ll mod_pwr(ll a, ll b) { 
	if(b < 0) return 0; 
	ll res = 1; 
	while (b > 0) {
		if (b & 1) res = res * a % mod; 
		a = a * a % mod; 
		b >>= 1;
	} 
	return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
		string s, t; cin >> s >> t;
		cout << s[0];
		for (ll i = 1; i < s.size(); i++) {
			if ((s[i]) >= (t[0]))
			break;
			cout << s[i];
		}
		cout << t[0];
    }    
    return 0;
}