#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;

int main()

{
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        int total = (2*b) + a;
        if (a == 0 || (a == 0 && b == 0)) cout << 1 << "\n";
        else cout << total + 1 << "\n";
    }
    return 0;
}