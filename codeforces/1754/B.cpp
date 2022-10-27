//#pragma GCC optimize("Ofast, no-stack-protector, unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define int long long
int ttt;

int n;



void solve(){
cin>>n;

if(n%2==0){
    int a=n/2;int b=n;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<a<<" ";a--;
        }else{
            cout<<b<<" ";b--;
        }
    }
    cout<<endl;return;
}

int a=(n+1)/2;int b=n;
cout<<1<<" ";
for(int i=2;i<=n;i++){
    if(i%2==0){
        cout<<a<<" ";a--;
    }else{
        cout<<b<<" ";b--;
    }
}
cout<<endl;
}
signed main()
{

    cin>>ttt;
    while(ttt--)solve();
}
