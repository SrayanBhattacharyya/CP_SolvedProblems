#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define pll pair<ll,ll>
void solve(){
     ll n;
     cin>>n;
     vector<ll>v(n); 
    for(auto &i:v){
        char k; cin>>k;
        i=k-'0';
    }
    ll seg=0;
    for(int i(0);i<n;++i){
        if(i==0){seg++;}
        else{
            seg+=(v[i]!=v[i-1]);
        }
    }
    auto p=v;
    sort(begin(p),end(p));
    if(p==v){cout<<0<<endl;return;}
    ll ans=seg-1;
    if(v.back()^(seg%2)){
        cout<<seg-2<<endl;
    }
    else{
        cout<<seg-1<<endl;
    }

    

}
int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
ll t=1;
cin>>t;
while (t--){
     solve();
    }
     return 0;
}
