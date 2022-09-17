//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, d; cin >> n >> d;
    vector <ll> p(n);
    for (ll i = 0; i < n; i++) cin >> p[i];
    sort (p.begin(), p.end());
    ll used = 0, ans = 0;
    for (ll i = n - 1; i >= used; --i) {
        ll need = (d + p[i]) / p[i];
        if (i + 1 - used >= need) {
            ans++;
            used += need - 1;
        }
        else break;
    }
    cout << ans << "\n";
    return 0;
}