#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
//Srayan Bhattacharyya JU EE

vector <int> grpcnt(5);
int main()
{
    ll n; cin>>n;
    string s,t;
    ll i;
    cin>>s;
    t=s;
    bool ok=0;
    vector<ll>v;
    if(n==1) {
        cout<<0; 
        return 0;
    }
    char c=s[0];
    for(i=1;i<s.length()-1 && s.length()>=1;++i)
    {
    if(s[i]!=c) {
    if(s[i]=='W') s[i]='B'; else s[i]='W';
    if(s[i+1]=='W') s[i+1]='B'; else s[i+1]='W';
    v.push_back(i+1);
    }
    }
    if(s[s.length()-1]==c) ok=1;
    if(ok) { cout<<v.size()<<"\n";for(auto it:v) cout<<it<<" ";}
    else {v.clear();
    if(t[0]=='W') t[0]='B'; else t[0]='W';
    if(t[1]=='W') t[1]='B'; else t[1]='W';
    v.push_back(1);
    c=t[0];
    for(i=1;i<t.length()-1 && t.length()>=1;++i)
    {
    if(t[i]!=c) {
    if(t[i]=='W') t[i]='B'; else t[i]='W';
    if(t[i+1]=='W') t[i+1]='B'; else t[i+1]='W';
    v.push_back(i+1);
    }
    }
    if(t[t.length()-1]==c) ok=1;
    if(ok){ cout<<v.size()<<"\n";for(auto it:v) cout<< it <<" ";}
    else cout<< -1 << "\n";
    return 0;
}
}