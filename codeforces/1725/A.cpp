//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> m >> n;
    if (n == 1) cout << m - 1 << "\n";
    else cout << m * (n - 1) << "\n";   
    return 0;
}