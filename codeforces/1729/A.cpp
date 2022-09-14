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
		ll a, b, c;
		cin >> a >> b >> c;
		ll t1 = a, t2 = abs(b - c) + c;
		if (t1 < t2) cout << 1 << "\n";
		else if (t1 > t2) cout << 2 << "\n";
		else cout << 3 << "\n"; 
    }    
    return 0;
}