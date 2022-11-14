//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5+1, MOD = 1e9+7;

vector<ll> g[N];
bool used[N], was[N];

bool fl;
ll cnt;

void dfs(ll v){
    used[v] = 1;
    cnt++;
    if (was[v]) fl = 0;
    for (ll to : g[v]){
        if (!used[to]) dfs(to);
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll &x : a) cin >> x, x--;
    for (ll &x : b) cin >> x, x--;
    for (ll i = 0, d; i < n; i++){
        cin >> d;
        d--;
        if (~d){
            was[d] = 1;
        }
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    ll ans = 1;
    for (ll i = 0; i < n; i++){
        if (!used[i]){
            fl = 1;
            cnt = 0;
            dfs(i);
            if (fl && cnt > 1){
                ans = (ans+ans) % MOD;
            }
        }
    }
    cout << ans;
    for (ll i = 0; i < n; i++) used[i] = was[i] = 0, g[i].clear();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;  
    while (t--){
        solve();
        cout << '\n';
    }
    return 0;
}