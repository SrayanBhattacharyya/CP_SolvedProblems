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
        ll n, k, x;
        cin >> n >> k;
        ll p[n]; 
        rep(i, n) cin >> p[i];
        ll lo = 0, hi = 1e15, mid;
        while (lo < hi){
            mid = (lo + hi)/2;
            ll total = p[0] + mid; int fl = 1;
            rep_a(i, 1, n){
                ll temp = (k*total)/100;
                if (temp < p[i]){
                    fl = 0;
                    break;
                }
                total += p[i];
            }
            if (fl) hi = mid;
            else lo = mid + 1;    
        }
        cout << lo << "\n";
    }
    return 0;
}