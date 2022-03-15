#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
//Srayan Bhattacharyya JU EE
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n]; int ct = 0, ct1 = 0;
        rep(i, n) cin >> a[i];
        int i = 0, j = n-1;
        while(a[i] && i < n) i++;
        while(a[j] && j >= 0) j--;
        if (j < 0) cout << 0 << endl;
        else cout << j-i+2 << endl;
        
    }
    return 0;
}