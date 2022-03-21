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
        string s; cin >> s;
        if (s.length() % 2 == 1) cout << "NO" << "\n";
        else
        {
            if (s.substr(0, (s.length()/2)) == s.substr(s.length()/2, s.length() - 1)) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
    return 0;
}