//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 10;
ll a[N],p[N],d[N][2];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    for(ll i = 1; i <= n; i++){
        cin >> a[i]; p[a[i]] += a[i];
    }
    for(int i = 1; i <= 100000; i++){
        d[i][0] = max(d[i - 1][1], d[i - 1][0]);
        d[i][1] = d[i - 1][0] + p[i];
    }
    cout << max(d[100000][0], d[100000][1]) << "\n";
    return 0;
}