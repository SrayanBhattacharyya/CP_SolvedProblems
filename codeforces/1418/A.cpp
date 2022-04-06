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
        ll x, y, k; cin >> x >> y >> k;
        ll t;
        if ((((y+1)*k) - 1) % (x - 1) == 0){
            t = (((y+1)*k) - 1) / (x - 1);
        }
        else t = ((((y+1)*k) - 1) / (x - 1)) + 1;
        cout << t + k << "\n";
    }
    return 0;
}