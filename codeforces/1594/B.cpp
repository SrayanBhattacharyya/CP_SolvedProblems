#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
typedef long long ll;
//Srayan Bhattacharyya JU EE

int main()
{
    int t; cin >> t;
    while (t--){
        ll n, k; cin >> n >> k;
        //for n = 2, binary numbers case; all natural numnbers special
        ll ans = 0, j = 1;
        while(k > 0)
        {
            if((k % 2) == 1) ans=(ans + j) % mod;
            j = (j * n) % mod;
            k /= 2;
        }
        cout << ans << "\n"; 
    } 
    return 0;
}