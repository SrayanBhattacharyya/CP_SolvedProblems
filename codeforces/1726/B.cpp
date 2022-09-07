//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5 + 30;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while (t--){
        ll n, m;
        cin >> n >> m;
        if(n == 1) {
            cout << "YES" << '\n';
            cout << m << '\n';
        } 
        else if(n & 1) {
            cout << (m < n? "NO" : "YES") << '\n';
            if(m >= n) {
                for(ll i = 0; i < n - 1; i++) cout << 1 << ' ';
                cout << m - (n - 1) << '\n';
            }
        } 
        else {
            cout << (m < n or m - (n - 2) & 1? "NO" : "YES") << '\n';
            if(m >= n and (m - (n - 2)) % 2 == 0) { 
                for(ll i = 0; i < n - 2; i++)  cout << 1 << ' ';
                cout << (m - (n - 2)) / 2 << ' ' << (m - (n - 2)) / 2 << '\n';
            }
        }
    }
    return 0;
}