#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
//Srayan Bhattacharyya JU EE
const int N = 1e2+29;
int hsh[N]={0};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        map<char, bool> key;
        key['r']=false;
        key[ 'b']=false;
        key['g']=false;
        bool ans=true;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]<'Z' && key[s[i]-'A'+'a']==false)
            {
                ans=false;
                break;
            }
            else if(s[i]>'a') key[s[i]]=true;
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}