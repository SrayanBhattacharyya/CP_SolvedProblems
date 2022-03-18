#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
//Srayan Bhattacharyya JU EE
int main()
{
    int t; cin >> t;
    while  (t--)
    {
        string s; cin >> s; char c; cin >> c;
        int fl = 0;
        for(int i = 0; i < s.length(); i += 2)
        {
            if (s[i] == c) fl = 1;
            else continue;
        }
        if (fl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}