//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll l = 1, r = 2e9;
    while (l < r){
        ll m = (l + r) / 2;
        ll temp = (m + 1) / 2 - 1 + (m - 4) / 4;
        if (temp < n) l = m + 1;
        else r = m;
    }
    cout << l << "\n";
    return 0;
}