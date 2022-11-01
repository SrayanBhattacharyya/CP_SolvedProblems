//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
const ll N = 5e5 + 10;

int n, par[N],cnt[N],ans[N];
bool done[N];
vector <pair <ll, ll>> adj[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--) {
        cin >> n;
        for(int i=1; i<n; i++){
            int a,b; cin >> a >> b;
            adj[a].pb(mp(b,i));
            adj[b].pb(mp(a,i));
            cnt[a]++,cnt[b]++;
        }
        queue<int> q;
        for(int i=1; i<=n; i++){
            if(adj[i].size() <= 1){
                q.push(i);
                done[i] = true;
            }
        }
        int cc = 0;
        while(q.size()){
            int node = q.front(); q.pop();
            pair <ll, ll> t = mp(-1,-1);
            for(pair <ll, ll> check:adj[node]){
                if(par[check.first] == node) continue;
                t = check;
            }
            par[node] = t.first;
            ans[t.second] = cc++;
            cnt[t.first]--;
            if(cnt[t.first] <= 1 && !done[t.first]){
                done[t.first] = true;
                q.push(t.first);
            }
        }
        for(int i=1; i<n; i++)
            cout << ans[i] << "\n";
        }    
    return 0;
}