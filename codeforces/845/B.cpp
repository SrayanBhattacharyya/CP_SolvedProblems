//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f

ll sumofdigits(ll n){
    n = abs(n);
    if (n < 10) return n;
    else return ((n % 10) + sumofdigits(n / 10));
}

ll dif(string a, string b){
	ll d = 0;
	while(a.length() < 3) a = "0" + a;
	while(b.length() < 3) b = "0" + b;
	for(ll i = 0; i < 3; i++) d += a[i] != b[i];
	return d;
}

int main(){
    string S;
    cin >> S;
    string s1 = S.substr(0,3), s2 = S.substr(3,3);
    ll ans = INF;
    for(ll i = 0; i <= 999; i++){
        for(ll j = 0; j <= 999; j++){
            if (sumofdigits(i) != sumofdigits(j)) continue;
            stringstream ss1, ss2;
            ss1 << i; ss2 << j;
            ans = min(ans, dif(s1, ss1.str())+dif(s2, ss2.str()));
        }
    }
    cout << ans << "\n";  
    return 0;
}