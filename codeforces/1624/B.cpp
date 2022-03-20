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
        int t1 = 2*b - c;
        int t2 = a  + (c -a)/2; int t3 = 2*(b - a) + a;
        if (t1 >= a && t1 % a == 0 && t1 > 0) cout << "YES" << "\n";
        else if (t2 >= b && t2 % b == 0 && t2 > 0 && (c-a) % 2 == 0) cout << "YES" << "\n";
        else if (t3 >= c && t3 % c == 0 && t3 > 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";  
    }
    return 0;
}