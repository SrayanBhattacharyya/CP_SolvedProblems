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
        int n; cin >> n;
        int x = INT_MAX, pos = -1;
        rep(i, n){
            int a; cin >> a;
            if (a < x){
                x = a; pos = i;
            }
        }
        cout << n-1 << "\n";
        rep(i,n){
            if (i == pos) continue;
            else cout << pos + 1 << ' ' <<  i + 1 << ' ' << x << ' ' << x + abs(i - pos) << "\n";
        }
    }
    return 0;
}