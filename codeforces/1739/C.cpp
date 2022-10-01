#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 10;
const ll MOD = 998244353;

ll f[N][2], c[500][500];

void precalc() {
    f[2][0] = 1; f[2][1] = 0;
    for (ll i = 0; i < 201; i++) {
        c[i][0] = 1;
        for (int j = 1; j <= i; j++) c[i][j ] =(c[i - 1][j - 1] + c[i - 1][j]) % MOD;
    }
    for(ll i = 4; i <= 60; i++) {
		f[i][0] = c[i - 1][i / 2 - 1]; 
        f[i][1] = c[i - 2][i / 2 - 2];
		f[i][0] = (f[i][0] + f[i - 2][1]) % MOD;
		f[i][1] = (f[i][1] + f[i - 2][0]) % MOD;
	}
} 

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precalc();
    ll t = 1;
    cin >> t;
    while (t--){
        ll x; cin >> x;
        cout << f[x][0] << " " << f[x][1] << " " << 1 << "\n";
    }    
    return 0;
}