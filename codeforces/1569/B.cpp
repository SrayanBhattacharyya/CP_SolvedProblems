#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()
{
    int t; cin >> t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int cnt = 0;
        for(auto i:s)if(i == '2')cnt++;
        if (cnt == 1 || cnt == 2) {
            cout << "NO" <<"\n";
            continue;
        }
        cout << "YES" <<"\n";;
        char ans[n][n];
        rep(i, n){
            rep(j, n){
                if(i==j)ans[i][j] = 'X';
                else ans[i][j] = '=';
            }
        }
 
        rep(i, n){
            if(s[i] == '2'){
                for(int j=i+1;j<n+i;j++){
                if (s[j%n] == '2') {
                    ans[i][j%n] = '+';
                    ans[j%n][i] = '-';
                    break;
                }
                }
            }
        }
        
        rep(i, n){
            rep(j, n)
            cout << ans[i][j]; cout<< "\n";
        }
    }
    return 0;
}