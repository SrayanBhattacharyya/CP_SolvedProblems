#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define inf 1000000009
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,m=0,k=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    ll a[26]={0},b[26]={0};
    for(i=0; i<n; i++)
    {
        a[s[i]-'a']++;
    }
    for(i=0; i<n; i++)
    {
        b[t[i]-'a']++;
    }
    for(i=0; i<26; i++)
    {
        if(a[i]!=b[i])
        {
            m=1;
            break;
        }
    }
    if(m==1)
    cout<<"-1";
    else
    {
        i=0;
        k=0;
        while(s[i]==t[i])
        i++;
        j=i;
        if(i==n)
        cout<<k;
        else
        {
            vector<int> v;
            while(k<10000 && j<n)
            {
                j=i;
                while(s[i]!=t[j])
                i++;
                while(i>j)
                {
                    char tem=s[i-1];
                    s[i-1]=s[i];
                    s[i]=tem;
                    i--;
                    k++;
                    v.push_back(i+1);
                }
                if(s[i]==t[j])
                {
                    j++;
                    i++;
                }
            }
            if(k<10000)
            {
                //cout<<s<<endl;
                cout<<v.size()<<endl;
                for(i=0; i<k; i++)
                cout<<v[i]<<" ";
            }
            else
            cout<<"-1";
        }
    }
}
