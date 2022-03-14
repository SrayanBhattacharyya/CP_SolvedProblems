#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
//Srayan Bhattacharyya JU EE
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int c = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] + k <= 5) c++;
    }
    cout << c/3 << endl;

    return 0;
}