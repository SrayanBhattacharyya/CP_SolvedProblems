#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+1;
const int mod=998244353;
ll fact[N],invfact[N];
ll binpow(ll b,ll p)
{
    ll r=1;
    while(p)
    {
        if(p&1)
        r=(r*b)%mod;
        b=(b*b)%mod;
        p/=2;
    }
    return r;
}
void precompute()
{
    fact[0]=1;
    for(ll i=1;i<N;i++)
    fact[i]=(fact[i-1]*i)%mod;
    invfact[0]=1;
    for(ll i=1;i<N;i++)
    invfact[i]=binpow(fact[i],mod-2);
}
int main()
{
    precompute();
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<int,int>mp;
        ll n;
        cin>>n;
        vector<ll>a(n+1);
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a.begin()+1,a.end());
            if(mp[a[n]]>1)
            cout<<fact[n]<<endl;
            else if(mp.find(a[n]-1)==mp.end())
            cout<<0<<endl;
            else
            {
            ll ans=(fact[n]*binpow(mp[a[n]-1]+1,mod-2))%mod;
            ans=(ans*mp[a[n]-1])%mod;
            cout<<ans<<endl;
            }
    }
    return 0;
}