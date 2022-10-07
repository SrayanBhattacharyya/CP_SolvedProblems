#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 505;
ll a[N][N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; 
    cin >> n >> m;
    for (ll i = 0; i < n; i++) for (ll j = 0; j < m; j++) cin >> a[i][j];
    ll an = 0;
    for (ll i = 0; i < n; i++) an ^= a[i][0];
    if (an > 0) {
        cout << "TAK\n";
        for (ll i = 0; i < n; i++)  cout << "1 ";
        return 0;
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 1; j < m; j++) {
            if(a[i][j] != a[i][0]) {
                cout << "TAK\n";
                for (ll h = 0; h < n; h++) {
                    if(h == i) cout << j + 1 << ' ';
                    else cout << "1 ";
                }
                return 0;
            }
        }
    }
    cout << "NIE";
    return 0;
}