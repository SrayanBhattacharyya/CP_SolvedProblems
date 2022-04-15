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
        int n;
        cin>>n;
        vector<int>a(n+1);
        rep_a(i, 1, n+1) cin >> a[i];
        int ans=0;
        for(int i = n;i >=1;)
        {
            int j = i;
            while (j >= 1 && a[j] == a[n]) j--;
            int len = (n-j);
            if (j) ans++;
            int new_idx = n-2*len;
            i = new_idx;
        }
        cout << ans << "\n";
    }
    return 0;
}