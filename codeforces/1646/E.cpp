//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e6 + 5;
bitset <20 * N> marked;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    ll ans[20] = {};
    for(ll i = 1; i < 20; i ++){
        ans[i] = ans[i - 1];
        for(ll j = 1; j <= m; j ++)
            if(marked[i * j]) ans[i] ++;
            else marked[i * j] = 1;
    }
    ll res = n * m - m + 1;
    vector<ll> done(n + 1, 0);
    for(ll i = 2; i <= n; i ++){
        if(done[i]) continue;
        ll k = 1, cur = i;
        while(1){
            cur *= i;
            if(cur > n) break;
            done[cur] = 1;
            k ++;
        }
        res -= ans[k];
    }
    cout << res << "\n";
    return 0;
}