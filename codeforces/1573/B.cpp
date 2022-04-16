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
        int n; cin >> n;
        int a[n], b[n];
        rep(i, n) cin >> a[i]; rep(i, n) cin >> b[i];
        map <int, int> m; vector <pair<int, int>> v;
        rep(i, n){
            m[a[i]] = i;
            v.push_back({b[i], i});
        }        
        sort(v.begin(), v.end());
        int mi = INT_MAX;
        for(int i = v.size()-1; i>=0; i--){
            mi = min(mi, v[i].second);
            v[i].second = mi;
        }
        
        int ans = INT_MAX;
        int j = 0;
        for(int i = 1;i<=2*n;i+=2){
            int x = m[i];
            x+=v[j].second;
            ans = min(ans, x);
            j++;
        }
        cout<< ans << "\n";
    }
    return 0;
}