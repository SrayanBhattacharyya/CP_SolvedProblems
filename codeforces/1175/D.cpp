//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e5 + 30;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n - 1; i >= 0; i--) a[i] += a[i + 1];
    if (n == 1) {
        cout << a[0] << "\n";
        return 0;
    }
    sort(a + 1, a + n);
    reverse(a + 1, a + n);
    ll ans = a[0];
    for (int i = 1; i < k; i++) ans += a[i];
    cout << ans << "\n";
    return 0;
}