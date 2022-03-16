#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
//Srayan Bhattacharyya JU EE
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for (int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                if(i+2<n && a[i+2]>a[i]) a[i+1]=a[i+2];
                else a[i+1]=a[i];
                ans++;
            }    
        }
        cout<<ans<<endl;
        for (int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    
}