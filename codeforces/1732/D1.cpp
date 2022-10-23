#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define pll pair<ll,ll>
ll inf=(1ll<<61);
void solve(){
     ll n;
     cin>>n;
     ll time=0;
     vector<pll>add,query; 
     add.push_back({0,0});
     set<ll>val={0};
    for(int i(0);i<n;++i){
        ++time;
        char k; cin>>k;
        ll t; cin>>t; val.insert(t);
        if(k=='+'){
            add.push_back({t,time});
        }
        else{
            query.push_back({t,time});
        }
    }
    map<ll,ll>m(begin(add),end(add));
    map<ll,vector<ll>>p;
    for(auto i:val){
        if(i==0){continue;}
        ll val=0;
        for(ll j(0);j<inf;j+=i){
            if(m.count(j)){
                p[i].push_back(max(val,m[j]));
                val=p[i].back();
            }
            else{break;}
        }
    }
    for(auto i:query){
        ll k=upper_bound(begin(p[i.first]),end(p[i.first]),i.second)-begin(p[i.first]);
        cout<<k*i.first<<endl;
    }
    

    

}
int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
ll t=1;
// cin>>t;
while (t--){
     solve();
    }
     return 0;
}
