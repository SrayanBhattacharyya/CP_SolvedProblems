//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 80;
ll a[N];
vector <ll> e[N];
vector<ll> topsort;
bool vis[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        ll n; cin >> n;
        ll k = 0;
        topsort.clear();
        for(ll i = 0; i <= n; ++i) {
            e[i].clear();
            vis[i] = 0;
        }
        for(ll i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i] >= i + 1)  k = i + 1;
            if(a[i] != 0 && a[i] != n + 1) {
                e[a[i]].push_back(i + 1);
                vis[a[i]] = 1;
            }
            else e[0].push_back(i + 1);
        }
 
        for(ll i = 0; i <= n;) {
            ll jok = -1;
            for(ll j = 0; j < e[i].size(); ++j) {
                if(vis[e[i][j]]) jok = e[i][j];
                else topsort.push_back(e[i][j]);
            }
            if(jok != -1) {
                topsort.push_back(jok);
                i = jok;
            }
            else break;
        }
        cout << k << '\n';
        for(ll i = 0; i < n; ++i) cout << topsort[i] << " ";
        cout << '\n';
    }
    return 0;
}