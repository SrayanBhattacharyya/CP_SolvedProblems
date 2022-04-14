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
        int n; cin >> n; int a[2*n];
        rep(i, 2*n) cin >> a[i];
        sort(a, a + 2*n);
        cout << abs(a[n-1] - a[n]) << "\n";
    }
    return 0;
}