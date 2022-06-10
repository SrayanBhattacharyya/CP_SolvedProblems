#include<bits/stdc++.h>
#pragma GCC optimize ("-O3")
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define int long long
#define double long double
#define pb push_back
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define diff(a,b) (a>b?a-b:b-a)
const int N=1e6+5;
void pairsort(int a[], int b[], int n){
    pair<int, int> pairt[n];
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
    sort(pairt, pairt + n);
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
int isPrime(int n){
    if(n < 2)
        return 0;
    if(n < 4)
        return 1;
    if(n % 2 == 0 or n % 3 == 0)
        return 0;
    for(int i = 5; i*i <= n; i += 6)
        if(n % i == 0 or n % (i+2) == 0)
            return 0;
    return 1;
}
long long C(int n, int r) {
    if(r>n-r) 
        r=n-r;
    long long ans=1;
    for(int i=1;i<=r;i++){
        ans*=n-r+i;
        ans/=i;
    }
    return ans;
}
int mod = 1e9+7;
int modexpo(int x,int p){
    int res = 1;
    x = x%mod;
    while(p){
        if(p%2)
            res = res * x;
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}
int t,n,a[N],b[N],p1,p2,ans,cnt1,cnt2;
int32_t main()
{
    IOS;
    cin>>t;
    while(t--)
    {
        cin>>n,p1=p2=1,cnt1=cnt2=ans=0;
        for(int i=n;i>=1;i--)
            cin>>a[i],cnt1+=(a[i]==1),cnt2+=(a[i]==2);
        for(int i=1;i<=n;i++)
            cin>>b[i],cnt1+=(b[i]==1),cnt2+=(b[i]==2);
        if(cnt1<cnt2)
        {
            map<int,int> v1,v2;
            int cnt11=0,cnt12=0,cnt21=0,cnt22=0;
            int v1s=0,v2s=0;
            for(int i=1;i<=n;i++)
            {
                if(a[i]==2)
                    cnt11++;
                else
                    cnt12++;
                if(!v1[cnt11-cnt12])
                    v1[cnt11-cnt12]=(cnt11+cnt12),v1s=max(v1s,cnt11-cnt12);
            }
            for(int i=1;i<=n;i++)
            {
                if(b[i]==2)
                    cnt21++;
                else
                    cnt22++;
                if(!v2[cnt21-cnt22])
                    v2[cnt21-cnt22]=(cnt21+cnt22),v2s=max(v2s,cnt21-cnt22);
            }
            v1[0]=v2[0]=0;
            int d=cnt2-cnt1;
            ans=1e18;
            for(int i=0;i<=d;i++)
                if(i<=v1s&d-i<=v2s)
                    ans=min(ans,v1[i]+v2[d-i]);
        }
        else if(cnt1>cnt2)
        {
            map<int,int> v1,v2;
            int cnt11=0,cnt12=0,cnt21=0,cnt22=0;
            int v1s=0,v2s=0;
            for(int i=1;i<=n;i++)
            {
                if(a[i]==1)
                    cnt11++;
                else
                    cnt12++;
                if(!v1[cnt11-cnt12])
                    v1[cnt11-cnt12]=(cnt11+cnt12),v1s=max(v1s,cnt11-cnt12);
            }
            for(int i=1;i<=n;i++)
            {
                if(b[i]==1)
                    cnt21++;
                else
                    cnt22++;
                if(!v2[cnt21-cnt22])
                    v2[cnt21-cnt22]=(cnt21+cnt22),v2s=max(v2s,cnt21-cnt22);
            }
            v1[0]=v2[0]=0;
            int d=cnt1-cnt2;
            ans=1e18;
            for(int i=0;i<=d;i++)
                if(i<=v1s&d-i<=v2s)
                    ans=min(ans,v1[i]+v2[d-i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}