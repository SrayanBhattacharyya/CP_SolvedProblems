#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, s, s1, j, f;
    
    cin>>t;
    // s represents red
    // s1 represents blue
    for(;t--;)
    {
        cin>>n;
        f=0;
        ll a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);
        
        s=a[n-1];
        
        s1=a[0]+a[1];
        
        if(s1<s){
            cout<<"YES\n";
            continue;
        }
        
        i=2;
        j=n-2;
        
        while(i<j){
            s=s+a[j];
            s1=s1+a[i];
            
            if(s1<s){
                f++;
                break;
            }
            
            i++;
            j--;
        }
        
        if(f==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}