//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 998244353;
ll n, m;
ll a[210000];
ll fac[2100] , cnt;
ll ans;

void getfac () {
	ll i , t;
	cnt = 0;
	t = a[1];
	for ( i = 2 ; i * i <= a[1] ; i++ ) {
		if ( t % i == 0 ) {
			fac[++cnt] = i;
			while ( t % i == 0 ) t = t / i;
		}
	}
	if (t != 1) fac[++cnt] = t;
}

void solve () {
	ll i , j , k , t , mask;
	ll now , flag , val;
	cin >> n >> m;
	for ( i = 1 ; i <= n ; i++ ) cin >> a[i];
	for ( i = 2 ; i <= n ; i++ ) {
		if ( a[i-1] % a[i] != 0 ) {
			cout << "0\n";
			return ;
		}
	}
	getfac ();
	ans = 1;
	for ( i = 2 ; i <= n ; i++ ) {
		t = a[i-1] / a[i];
		mask = 0;
		for ( j = 1 ; j <= cnt ; j++ ) {
			if ( t % fac[j] == 0 ) mask |= (1<<(j-1));
		}
		now = m / a[i];
		for ( k = mask ; k != 0 ; k = (k-1) & mask ) {
			if ( __builtin_popcount ( k ) % 2 == 0 ) flag = 1;
			else flag = -1;
			val = 1;
			for ( j = 1 ; j <= cnt ; j++ ) {
				if ( k & (1<<(j-1)) ) val = val * fac[j];
			}
			now += flag * m / (a[i] * val);
		}
		now %= mod;
		if ( now < 0 ) now += mod;
		ans = ans * now % mod;
	}
	cout << ans % mod << "\n";
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}