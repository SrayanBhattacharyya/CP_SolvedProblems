//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f (ll n , ll x){
    for(ll i = x + 1; i * i <= n; i ++) if(n % i == 0) return i;
    return n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--) {
        int n; cin >> n;
	
	int c1 = n / 3;
	
	if ((n - c1) % 2 != 0) c1++;
	
	int c2 = (n - c1) / 2;
	cout << c1 << " " << c2 << "\n";
    }    
    return 0;
}