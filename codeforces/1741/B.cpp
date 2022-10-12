//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        ll n; 
        cin >> n;
        if (n == 3) cout << -1 << '\n';
        else {
            if (n != 1) cout << n << " " << n - 1 << " ";
            else cout << 1 << '\n';
            for (ll i = 3; i <= n; i++) cout << i - 2 << " ";
            cout << '\n';
        }
    }
    return 0;
}