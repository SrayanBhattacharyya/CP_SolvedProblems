//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 3e7 + 5;
bool prime[N];

int main(){
    fill (prime, prime + N, 1);
    for(int i = 2; i < N; i++) {
        if(prime[i]) {
            for(int j = 2 * i; j < N; j += i) prime[j] = 0;
        }
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    ll a[n], ans = 0, ai = -1;
    bool scs = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) ans++;
        else {
            if (prime[a[i] + 1] && !scs) {
                ai = i;
                ans++;
                scs = 1;
            }
        }
    }
    ans = max (ans, 1ll);
    if (ans < 2) {
        for(ll i = 0; i < n; i++) {
            for(ll j = i + 1; j < n; j++) {
                if (prime[a[i] + a[j]]) {
                    cout << 2 << '\n' << a[i] << ' ' << a[j];
                    return 0;
                }
            }
        }
    }
    cout << ans << '\n';
    if (ans == 1) cout << a[0];
    else {
        for(ll i = 0; i < ans - 1; i++) cout << 1 << ' ';
        if(ai != -1)
        cout << a[ai];
        else cout << 1;
    }
    return 0;
}