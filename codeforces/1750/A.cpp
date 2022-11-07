//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x:a) cin >> x;
    if (a[0] == 1) return "Yes";
    return "No";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        cout << solve() << "\n";
    }    
    return 0;
}