#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool solve() {
    ll n; cin >> n;
    vector <ll> a(n);
    map <ll, ll> m;
    for (auto &x : a) {
        cin >> x; m[x]++;
    }
    for (auto &x : a) if (m[x] > 1) return false;
    return true; 
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        if (solve()) cout << "YES\n";
        else cout << "NO\n";
    }
}
