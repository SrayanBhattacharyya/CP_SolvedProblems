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
    ll n, m, common=0;
    cin >> n >> m;
    string s;
    unordered_map <string, int> mp;
    rep(i, n)
    {
        cin>>s;
        mp[s]++;
    }
    rep(i, m)
    {
        cin>>s;
        if(mp[s]) common++;
    }
    n=n-common;
    m=m-common;
    if(common % 2 ==1) n++;
    if(n > m)
    cout << "YES" << "\n";
    else
    cout<<"NO"<< "\n";
    return 0;
}