#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
//Srayan Bhattacharyya JU EE
int main()
{
    int t; cin >>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++) cin>>a[i];
        vector<int> v1,v2, odd, even;
        for (int i=0;i<n;i++)
        {
            if(a[i]%2) v1.push_back(a[i]), odd.push_back(a[i]);
            else v2. push_back(a[i]), even.push_back(a[i]);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        if (v1== odd && v2== even)
        cout<<"Yes"<< endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}