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
        int a, b, c; cin >> a >> b >> c;
        int m = 0;
        if ((2*b - c) % a == 0 & 2*b - c > 0) m = 1;
        else if ((a + c) % (2*b) == 0) m = 1;
        else if ((2 * b - a) % c == 0 && (2 * b- a) > 0) m = 1;
        if (m) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }    
    return 0;
}