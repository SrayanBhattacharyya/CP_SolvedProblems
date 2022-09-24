//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string pw; ll n;
    cin >> pw; cin >> n;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == pw) {
            cout << "YES" << "\n";
            return 0 ;
        }
        if (s[1] == pw[0]) x = 1;
        if (s[0] == pw[1]) y = 1;
    }
    cout << (x + y == 2 ? "YES" : "NO");
}
