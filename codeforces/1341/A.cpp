#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()

{
    int t; cin >> t;
    while (t--){
        int n, a, b, c, d; 
        cin >> n >> a >> b >> c >> d;
        int upl = n*(a+b), lll = n*(a-b);
        if (lll > (c+d) || upl < (c-d)) cout << "No" << "\n";
        else cout << "Yes" << "\n";
    }
    return 0;
}