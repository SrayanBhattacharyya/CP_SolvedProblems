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
    int q; cin >> q;
    while (q--){
        ll c,m,x;
        cin>>c>>m>>x;
        int lo=0,hi=min(c,m);
        int res=0;
        int total=c+m+x;
        while(lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            ll rem = total - 2*mid;
            if(rem >= mid)
            {
                res=mid;
                lo = mid+1;
            }
            else hi = mid - 1;
        }
        cout << res << "\n";
    }
    return 0;
}