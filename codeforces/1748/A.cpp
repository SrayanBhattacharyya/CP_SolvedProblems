//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 998244353;
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        cout << ceil_div(n, 2) << "\n";
    }    
    return 0;
}