#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a[3];
        for (auto &x : a) cin >> x;
        sort(a, a + 3);
        if (a[2] == a[1] + a[0]) cout << "YES\n";
        else cout << "NO\n";
    }
}
