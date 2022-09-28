//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k, t; cin >> n >> k >> t;
    if (t <= k) cout << t << "\n";
    else if (t <= n) cout << k << "\n";
    else cout << (n + k) - t << "\n";
    return 0;
}