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
        int n; cin >> n; int m = n-1; int o = m/2;
        if (n % 2 == 0){
            cout << 2 << " " << n - 3 << " " << 1 << "\n";
        }
        else{
            if (o % 2 == 0) cout << o + 1 << " " << o - 1 << " " << 1 << "\n";
            else cout << o + 2 << " " << o - 2 << " " << 1 << "\n";
        }
    }
    return 0;
}