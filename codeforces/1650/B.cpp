#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
//Srayan Bhattacharyya JU EE
int mo(int x, int y)
{
    return (x/y) + (x % y);
}
int main()

{
    int t; cin >> t;
    while (t--)
    {
        int l, r, a; cin >> l >> r >> a;
        if (r/a == l/a) cout << mo(r, a) << endl;
        else 
        {
            cout << max(mo(r,a), ((r/a) - 1) + (a - 1)) << endl;
        }


    }
    return 0;
}