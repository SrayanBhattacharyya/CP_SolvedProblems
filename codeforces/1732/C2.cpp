#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define pll pair<ll,ll>
vector<ll>v,s,x;
ll n,q;
ll inf=(1ll<<61);
ll val(ll a,ll b){
    if(a>=b){return 0;}
    auto l=a,r=b;
    ll value=s[r]-s[l]+v[l]-(x[r]^x[l]^v[l]);
    return value;
}
ll kk;
ll skip=0;
ll fr[300000];
ll bk[300000];
void pre(){
    for(ll i(n-1);i>-1;--i){
        if(v[i]>0){
            fr[i]=i;
        }
        else if(i==n-1){
            fr[i]=n;
        }
        else{
            fr[i]=fr[i+1];
        }
    }
    for(ll i(0);i<n;++i){
        if(v[i]>0){
            bk[i]=i;
        }
        else if(i==0){
            bk[i]=-1;
        }
        else{
            bk[i]=bk[i-1];
        }
    }
}
pll find(ll a){
    ll lo=a,hi=n-1,ans=hi;
    while (lo<=hi)
    {
        ll mid=(lo+hi)>>1;
        if(val(a,mid)>=kk){ans=mid; hi=mid-1;}
        else{lo=mid+1;}
    }
    return {a,ans};

}
pll find2(ll a){
    ll lo=0,hi=a,ans=lo;
    while (lo<=hi)
    {
        ll mid=(lo+hi)>>1;
        if(val(mid,a)>=kk){ans=mid; lo=mid+1;}
        else{hi=mid-1;}
    }
    return {ans,a};
}

ll len(pll a){
    return a.second-a.first;
}
pll query(ll a,ll b){
    if(kk==0){
        return {a,a};
    }
    else if(v[a]==0){
        return query(fr[a],b);
    }
    else if(v[b]==0){
        return query(a,bk[b]);
    }
    else if(b==(a+1)){
        return {a,b};
    }
    else if(val(a+1,b-1)==kk){
        
        
        pll t=find(a),q=find2(b);
        if(len(t)>=len(q)){swap(t,q);}
        pll ok= query(a+1,b-1);
        if(len(t)>=len(ok)){return ok;}
        else{return t;}
        
    }
    else{
        pll t=find(a),q=find2(b);
        if(len(t)>=len(q)){return q;}
        else{return t;}
    }
}
void solve(){
     
     cin>>n>>q;
    vector<ll>v(n);
    for(int i(0);i<n;++i){cin>>v[i];}
    ::v=v;
    s=v,x=v;
    partial_sum(begin(v),end(v),begin(s));
    for(int i(1);i<n;++i){
        x[i]^=x[i-1];
    }
    pre();
    for(int i(0);i<q;++i){
        ll l,r; 
        cin>>l>>r;--l,--r;
        kk=val(l,r);
        skip=0;
        pll t=query(l,r);
        t.first++,t.second++;
        cout<<t.first<<" "<<t.second<<endl;
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
