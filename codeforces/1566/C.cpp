#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
#define mods 998244353
typedef long long ll;
//Srayan Bhattacharyya JU EE
int solve(string s){
    int ans = count(s.begin(), s.end(), '0');
    int n = s.size();
    bool a = false, b = false;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') a = true;
        if (s[i] == '1') b = true;
        if (a && b) {
            ++ans;
            a = b = false;
        }
    }
    return ans;
}
int main()
{
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string r1, r2; cin >> r1; cin >> r2;
        string s = ""; int ans = 0;
        rep(i, n){
            if (r1[i] != r2[i]){
                ans += 2 + solve(s);
                s = "";
            }
            else s += r1[i];
        }
        cout << ans + solve(s) << "\n";
    }
    return 0;
}