#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1000 + 10;
ll arr[N][N], sm1[N][N], bi1[N][N], sm2[N][N], bi2[N][N], ans[N][N];
set <ll> s;
map <ll, ll> mp;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i ++) for (ll j = 0; j < m; j ++) cin >> arr[i][j];
    for (ll i = 0; i < n; i ++){
        for (ll j = 0; j < m; j ++) s.insert(arr[i][j]);
        ll j = 0, ss = s.size();
        while (!(s.empty())) {
            mp[*s.begin()] = j;
            j ++;
            s.erase(s.begin());
        }
        for (ll j = 0; j < m; j ++) {
            sm1[i][j] = mp[arr[i][j]];
            bi1[i][j] = ss - sm1[i][j] - 1;
        }
        mp.clear();
    }
    for (ll j = 0; j < m; j ++) {
        for (ll i = 0; i < n; i ++) s.insert(arr[i][j]);
        ll i = 0, ss = s.size();
        while (!(s.empty())) {
            mp[*s.begin()] = i;
            i ++;
            s.erase(s.begin());
        }
		for (ll i = 0; i < n; i ++) {
            sm2[i][j] = mp[arr[i][j]];
            bi2[i][j] = ss - sm2[i][j] - 1;
        }
        mp.clear();
    }
    for (ll i = 0; i < n; i ++) for (ll j = 0; j < m; j ++)
        ans[i][j] = max(sm1[i][j], sm2[i][j]) + max(bi1[i][j], bi2[i][j]) + 1;
    for (ll i = 0; i < n; i ++) {
        for (ll j = 0; j < m; j ++) cout << ans[i][j] << " ";
        cout << "\n";
    }
    return 0;
}