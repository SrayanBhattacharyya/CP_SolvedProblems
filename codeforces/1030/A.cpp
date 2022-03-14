#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
//Srayan Bhattacharyya JU EE
int pf[2];
int main()
{
    int n; cin >> n;
    int a[n];
    
    rep(i, n)
    {
        cin >> a[i];
        pf[a[i]] ++;
    }
    if (pf[1] == 0) cout << "EASY" << endl;
    else cout << "HARD" << endl;


    return 0;
}