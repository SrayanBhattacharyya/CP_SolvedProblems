#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y,lenb;
bool flag;
string Y;
set<string>st1;

string change(ll x){
    string s="",ans="";
    while(x){
        ll tt=x%2;
        x/=2;
        s+=(tt+'0');
    }
    ll idx=0;
    for(ll i=s.length()-1;i>=0;i--){
        if(s[i]=='0') continue;
        idx=i;break;
    }
    for(ll i=idx;i>=0;i--) ans+=s[i];
    return ans;
}

string change1(string s,int x){
    s+=(x+'0');
    string ans="";
    ll idx=0;
    for(ll i=s.length()-1;i>=0;i--){
        if(s[i]=='0') continue;
        idx=i;break;
    }
    for(ll i=idx;i>=0;i--) ans+=s[i];
    return ans;
}

void bfs(ll x){
    queue<string>q;
    map<string,bool>mp;
    q.push(change(x));
    while(!q.empty()){
        auto u=q.front(); q.pop();
        if(mp.count(u)) continue;
        if(u.length()>lenb+64) continue;
        if(u==Y) {flag=true;return;}
        st1.insert(u);
        mp[u]=true;
        for(int i=0;i<2;i++){
            string ss=change1(u,i);
            if(!mp.count(ss)) q.push(ss);
        }
    }
}

int main(){
    scanf("%lld%lld",&x,&y);
    Y=change(y);
    lenb=Y.length();
    bfs(x);
    if(flag) puts("YES");
    else puts("NO");
    return 0;
}