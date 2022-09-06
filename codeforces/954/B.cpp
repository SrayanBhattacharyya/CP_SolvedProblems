//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    string s; cin >> s;
    ll ans = 0;
    for (ll i = 1; i * 2 <= n; i++) {
        ll cok = 1;
        for (ll j = 0; j < i; j++)
        cok = (cok && s[j] == s[j + i]);
        if (cok) ans = i;
    }
    cout << n - max(0LL, ans - 1) << "\n";
    return 0;
}