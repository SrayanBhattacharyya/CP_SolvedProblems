//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e6 + 10;
ll p[N];
const ll INF = 1e18;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n, k; cin >> n >> k;
        ll ans, mn = INF;
        for(ll i = 0 ; i < n ; i++) cin >> p[i];
		for(ll i = 0 ; i + k < n ; i++) {
			if(mn > p[i + k] - (p[i] + p[i + k]) / 2){
				mn = p[i + k] - (p[i] + p[i + k]) / 2;
				ans = (p[i] + p[i + k]) / 2;
			}
		}
		cout << ans << "\n";
    }    
    return 0;
}