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
    int t; cin >> t;
    while (t--){
        int a[4]; int m;
        cin >> a[0] >> a[1] >> a[2] >> m;
        sort (a, a+3);
        bool fl = 1;
        if(a[0] + a[1] + a[2] - 3 >= m)
        {
            if(a[2]-1>=a[0]+a[1])
            {
                if(a[2]-1-a[1]-a[0]>m)
                fl=0;
            }
        }
        else fl = 0;
        if(fl) cout<< "YES" << "\n";
        else cout<< "NO" << "\n";

    }
    return 0;
}