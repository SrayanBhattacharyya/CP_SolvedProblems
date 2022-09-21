//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1000000000LL

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n, m;
		cin >> n >> m;
        if (n < m) swap(n, m);
        cout << n + m * 2 - (n == 1) - 2 << "\n";
    }     
    return 0;
}