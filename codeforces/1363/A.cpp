#include "bits/stdc++.h"
using  namespace  std;
typedef  long long ll;
#define all(x) x.begin(), x.end()
 
 
void solve(){
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int i = 0; i < n; i++){
                cin>>a[i];
                a[i] %= 2;
        }
        int O = count(a, a + n, 1);
        int E = count(a, a + n, 0);
 
 
        for(int i = 1; i <= O; i += 2){
                int e = x - i;
                if(e >= 0 && e <= E){
                        cout<<"YES\n";
                        return;
                }
        }
        
        cout<<"NO\n";
}
int main(){
        cin.tie(0);
        cin.sync_with_stdio(0);
        
        ll T; cin>>T;
        while(T--){
                solve();
        }
}