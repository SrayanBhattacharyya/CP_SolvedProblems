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
    ll n, i, count=0;
    cin >> n;
    ll a[n];
    rep(i, n){
        cin >> a[i];
        if (a[i] % 2 == 1) count++;
    }
    if (count>0) cout << "First" << "\n";
    else cout << "Second" << "\n";
    return 0;
}