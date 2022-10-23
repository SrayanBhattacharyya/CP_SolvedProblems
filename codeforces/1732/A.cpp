#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define pll pair<ll,ll>
ll cost[30][30];
void solve(){
     ll n;
     cin>>n;
     vector<ll>v(n); 
    for(auto &i:v){cin>>i;}
    ll ans=v[0];
    for(auto i:v){
        ans=__gcd(ans,i);
    }
    if(ans==1){
        cout<<0<<endl; return;
    }
    ll k=__gcd(ans,n);
    if(k==1){cout<<1<<endl; return;}
     k=__gcd(ans,n-1);
     if(k==1){cout<<2<<endl; return;}
     else{
        cout<<3<<endl; return;
     }

}
int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
ll t=1;
cin>>t;
for(int i(0);i<30;++i){
    for(int j(0);j<30;++j){
        cost[i][j]=50;
    }
}
while (t--){
     solve();
    }
     return 0;
}
