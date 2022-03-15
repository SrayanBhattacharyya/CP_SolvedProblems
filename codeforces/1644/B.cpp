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
        int a[n];
        rep(i,n)
        {
            a[i] = i+1;
        }
        reverse(a, a+n);
        rep(i,n) cout << a[i] << " ";
        cout << endl;
        rep(i,n-1)
        {
            swap(a[i], a[i+1]);
            rep(i,n) cout << a[i] << " ";
            cout << endl;
            swap(a[i], a[i+1]);
        }


    }
    return 0;
}