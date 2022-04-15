#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
#define mods 998244353
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++)cin>>a[i];
        ll cc=1,it=n,pos=0,idx;
        while(it>1 && a[it]>=a[it-1])
        {
            if(a[it]>=0)pos++,idx=it;
            cc++,it--;
        }
        if(cc==n)cout<<0<<"\n";
        else if(pos && cc>1)
        {
            cout<<(it-1)<<"\n";
            for (ll i=1;i<it;i++) cout<<i<<" "<<it<<" "<<idx<<"\n";
        }
        else
        cout << -1 <<" \n";
    }
    return 0;
}
