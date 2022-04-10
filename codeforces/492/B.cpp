#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
//Srayan Bhattacharyya JU EE

int main()
{
    int n; int l; cin >> n >> l;
    double a[n]; double diff[n-1];
    rep(i, n){
        cin >> a[i];
    }
    sort(a, a+n);
    
    rep(i, n-1){
        diff[i] = abs(a[i] - a[i+1]);
    }
    
    sort(diff, diff + (n-1));
    if (a[0] == 0 && a[n-1] == l){
        cout << fixed << setprecision(10) << diff[n - 2] / 2.0 << "\n";
    }
    else{
        double start = a[0] - 0;
        double end = l - a[n-1];
        double gap = diff[n - 2] / 2.0;

        double ans = max(gap, max(start, end));
        cout << fixed << setprecision(10) << ans << "\n";
    }
    return 0;
}