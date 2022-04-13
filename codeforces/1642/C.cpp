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
        ll n, x; cin >> n >> x;
        vector <ll> a(n);
        map <ll, ll> m;
        ll ans = 0;
        rep(i, n){
            cin >> a[i];
            m[a[i]] += 1;
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        rev(i, n-1){
            if(m[a[i]]){
            if(m[x*a[i]]){
                m[x*a[i]]--;
            }
            else{
                ans++;
            }
            m[a[i]]--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}