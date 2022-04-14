#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
#define mods 998244353
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()
{
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int left = 0, ans = 0;
        rep(i, s.size()){
            if (s[i] == 'L'){
                left++;
                if (left > ans) ans = left;
            }
            else left = 0;
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}