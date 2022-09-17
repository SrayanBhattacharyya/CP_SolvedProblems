//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll n1 = 4 * (n / 3) + (3 + (n % 3));
    if (n == 1) cout << 3 << "\n";
    else if (n == 2) cout << 5 << "\n";
    else cout << n1 << "\n";
    return 0;
}