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
        vector <int> v; 
        rep(i,n)
        {
            int a; cin >> a; v.push_back(a);
        }
        sort(v.begin(), v.end());
        cout << v[n-1] - v[0] << "\n";
    }
    return 0;
}