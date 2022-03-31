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
        //map <int, int> m;
        int n; cin >> n;
        vector <int> v(n);
        rep(i,n) cin >> v[i];
        // for (auto it : v){
        //     m[v[i]] = count(v.begin(), v.end(), v[i]);
        // }
        sort(v.begin(), v.end(), greater<int>());
        //rep(i,n) cout << v[i];
        if (n == 1)
        {
            if (v[0] == 1) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
        // else{
        //     int fl = 1;
        //     rep(i, n-1)
        //     {
        //         if (v[i] - v[i+1] <= 1) continue;
        //         else{
        //             fl = 0;
        //             break;
        //         }
        //     }
        //     if (fl == 1) cout << "YES" << "\n";
        //     else if (fl == 0) cout << "NO" << "\n";
        // }
            else{
                if (v[0] - v[1] > 1) cout << "NO" << "\n";
                else cout << "YES" << "\n";
            }
        }
    return 0;        
}
    