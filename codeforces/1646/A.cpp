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
        long long n; long long s;
        cin >> n >> s;
        cout << s/(n*n) << endl;
    }    
    return 0;
}