#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()
{
    int t; cin >> t;
    while (t--){
        string x1, x2, p1, p2;
        cin >> x1 >> p1; cin >> x2 >> p2;
        int l1 = x1.size() + stoi(p1);
        int l2 = x2.size() + stoi(p2);
        if (l1 > l2) cout << ">" << "\n";
        else if (l1 < l2) cout << "<" << "\n";
        else if (l1 == l2){
            while (x1.size() > x2.size()) x2 += '0';
            while (x1.size() < x2.size()) x1 += '0';
            if (stoi(x1) > stoi(x2)) cout << ">" << "\n";
            else if (stoi(x1) < stoi(x2)) cout << "<" << "\n";
            else if (stoi(x1) == stoi(x2)) cout << "=" << "\n";
        }
    }
    return 0;
}