//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
		ll x, y, s = 0;
		cin >> x >> y;
		while(x > 0) {
			s += x % y + 1;
			x /= y;
		}
		cout << s - 1 << '\n';
    }    
    return 0;
}