//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        ll n;
		cin >> n;
		ll t = n - 2;
		if(t & 1) {
			cout << "1 2 3 ";
			for(ll i = t; i > 3; i--) cout << i << " ";
			cout << n - 1 << ' ' << n << "\n";
		} 
		else {
			for(ll i = t; i >= 1; i--) cout << i << " ";
			cout << n - 1 << ' ' << n << "\n";
		}
    }    
    return 0;
}