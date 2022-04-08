#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()

{
    int t; cin >> t;
    while (t--){
        int n; cin >> n; int a[n];
        rep(i, n) cin >> a[i];
        if (n == 1){
            cout << a[0] << "\n";
            continue;
        }
        int flag = 0; int ans = a[0];
        rep(i, n){
            if (a[i] > 0){
                flag = 1; break;
            }
            ans = max(ans, a[i]);
        }
        if (flag == 0){
            cout << ans << "\n"; continue;
        }
        int sign; ans = a[0];
        if (a[0] > 0) sign = 1;
        else sign = -1;
        ll total_max = 0;
        rep(i, n){
            if ((sign == 1 && a[i] > 0) || (sign == -1 && a[i] < 0)){
                ans = max(ans, a[i]);
            }
            else{
                total_max += ans;
                ans = a[i];
                if (sign == 1) sign = -1;
                else sign = 1;      
            }
            if (i == n - 1){
                if ((a[n-1]> 0 && a[n-2] > 0) || (a[n-1] < 0 && a[n-2] < 0)){
                    ans = max(ans, a[i]);
                    total_max += ans;
                }
                else{
                    total_max += a[n-1];
                }
            }
        }
        cout << total_max << "\n";
    }       
    return 0;
}