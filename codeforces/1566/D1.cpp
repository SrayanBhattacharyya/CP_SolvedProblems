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
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> a(n * m);
        for (int i = 0; i < n * m; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n * m; i++) {
            a[i].second = -a[i].second;
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            sort(a.begin() + (m * i), a.begin() + (m * i + m));
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < j; k++) {
                    if (a[i * m + k].second > a[i * m + j].second) res++;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}