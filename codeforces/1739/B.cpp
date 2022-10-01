#include <bits/stdc++.h>
using namespace std;

 
const int N = 109;
 
int a[N];
 
inline void Solve(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] && a[i - 1] >= a[i]) {
            cout << -1;
            return;
        }
        a[i] += a[i - 1];
    }
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        Solve();
        cout << '\n';
    }
}