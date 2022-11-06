//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

map <ll , ll> cc;
const ll inf = 1000;
vector <ll> tmp;
int bitcnt[400];
int ddst[70][70], ddst2[70][70];


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
	bool flg = false;
    for(ll i = 0; i <= 64; i++){
        for(ll j = 0; j <= 64; j++) ddst[i][j] = ddst2[i][j] = inf;
        ddst[i][i] = ddst2[i][i] = 0;
 
    }
    int ans = inf;
    for (ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        tmp.clear();
        for(ll j = 0; j < 64; j++){
            if((1LL<<j) & x) tmp.push_back(j + 1), bitcnt[j + 1]++;
        }
        cc[x]++;
        for(ll j = 1; j <= 64; j++){
            if(bitcnt[j] == 3) {
                flg = true;
                break;
            }
        }
        if(flg) break;
        if(cc[x] > 1) continue;
        for(ll i = 0; i < tmp.size(); i++){
            for(ll j = i + 1; j < tmp.size(); j++){
                ll p = tmp[i];
                ll q = tmp[j];
                if(ddst[p][q] != 1 && ddst[p][q] < inf) ans = min(ans, ddst[p][q] + 1);
                for(ll u = 1; u <= 64; u++){
                    for(ll v = 1; v <= 64; v++){
                        if(ddst[u][p] + ddst[q][v] < ddst2[u][v]) {
                            ddst2[u][v] = ddst[u][p] + ddst[q][v] + 1;
                            ddst2[v][u] = ddst[u][p] + ddst[q][v] + 1;
                        }
                    }
                }
            }
        }
        for(ll xx = 1; xx <= 64; xx++){
            for(ll yy = 1; yy <= 64; yy++) {
                ddst[xx][yy] = ddst2[xx][yy];
            }
        }
    }
 
    if (flg) {
        cout << 3 << "\n";
        return 0;
    }
    if(ans == inf) ans = -1;
    cout << ans << "\n";
	return 0;
}