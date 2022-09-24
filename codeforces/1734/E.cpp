//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e6 + 5;
ll n, a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= n; j++){
            cout << ((j - i + n * n) * i % n + a[i] % n + n * n) % n << ' ';
        }
        cout << "\n";
    }  
    return 0;
}