//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f

void solve() {
    int n;
    cin >> n;
    vector <int> v(2*n);
    for (int i = 0; i < 2 * n; i++) cin >> v[i];
    sort( v.begin(), v.end());
    if( v[n] > v[n - 1] ) cout << "YES";
    else cout << "NO";
    cout << "\n";
    return;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}