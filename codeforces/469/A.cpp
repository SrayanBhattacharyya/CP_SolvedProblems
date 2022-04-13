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
    int f,p,q,c=0,a[200];
    cin>>f>>p;
    rep(i, p) cin >> a[i];
    cin >> q;
    rep_a(i, p, p+q) cin>>a[i]; 
    sort(a,a+(p+q));
    for(int i=0;i<(p+q);i++) if(a[i] != a[i+1]) c++;
    if(c==f) cout << "I become the guy." << "\n";
    else cout << "Oh, my keyboard!" << "\n";
    return 0;
}