//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll MB = 32;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll n; cin >> n;
    vector <ll> b(n), c(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++){
        cin >> b[i];
        sum += b[i];
    } 
    for (ll i = 0; i < n; i++){
        cin >> c[i];
        sum += c[i];
    }
    if (sum % (2 * n) != 0){
        cout << -1;
        return 0;
    }
    sum /= 2 * n;
    vector <ll> a(n);
    for (ll i = 0; i < n; i++){
        a[i] = b[i] + c[i] - sum;
        if (a[i] % n != 0){
            cout << -1;
            return 0;
        }
        a[i] /= n;
    }
    vector <ll> nb(n, 0), nc(n, 0);
    for (ll k = 0; k < MB; k++){
        ll cnt = 0;
        for (ll i = 0; i < n; i++){
            if (a[i] & (1 << k)) cnt++;
        }
        for (ll i = 0; i < n; i++){
            if (a[i] & (1 << k)){
                nb[i] += (1 << k) * cnt;
                nc[i] += (1 << k) * n;
            }
            else nc[i] += (1 << k) * cnt;
        }
    }
    for (ll i = 0; i < n; i++){
        if (b[i] != nb[i] || c[i] != nc[i]){
            cout << -1;
            return 0;
        }
    }
    for (ll i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}