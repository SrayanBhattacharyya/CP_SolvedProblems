#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
//Srayan Bhattacharyya JU EE
int main()
{
    int n; cin >> n;
    int a[n]; int b[n]; double c[n]; map <pair<int, int>, int> m; int d[n];
    int count = 0;
    rep(i, n) cin >> a[i]; rep(i, n) cin >> b[i];
    rep(i, n){
        if (a[i] == 0 && b[i] == 0) count ++;
        else if (a[i] == 0 && b[i] != 0) continue;
        else{
            int g = __gcd(abs (a[i]), abs(b[i]));
            a[i] /= g; b[i] /= g;
            if (a[i] < 0){
                a[i] *= -1; b[i] *= -1;
            }
            m[{-b[i], a[i]}]++;        
        }
    }
    int maxct = 0;
    for (auto val : m){
        maxct = max(maxct, val.second);
    }
    cout << maxct + count << "\n";

    return 0;
}