//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n; cin >> n;
    ll a[n + 1] = {};
    pair<ll, ll> p[n / 2 + 2] = {};

    for (ll i = 1; i < n; i += 2) {
        ll tmp;
        cout << "? 2 " << i << " " << i + 1 << " " << 1 << endl;
        cin >> tmp;
        if (tmp == 1) {
            a[i] = 1;
            p[i / 2].first = 1;
        } 

        else if (tmp == 2) {
            cout << "? 2 " << i + 1 << " " << i << " " << 1 << endl;
            ll tmp2;
            cin >> tmp2;
            if (tmp2 == 1) {
                a[i + 1] = 1;
                p[i / 2].first = 1;
            }
        }

        if (a[i] != 1 and a[i + 1] != 1) p[i / 2].first = tmp;
        cout << "? 1 " << i << " " << i + 1 << " " << n - 1 << endl;
        cin >> tmp;
        if (tmp == n) {
            a[i + 1] = n;
            p[i / 2].second = n;
        } 

        else if (tmp == n - 1) {
            cout << "? 1 " << i + 1 << " " << i << " " << n - 1 << endl;
            ll tmp2;
            cin >> tmp2;
            if (tmp2 == n) {
                a[i] = n;
                p[i / 2].second = n;
            }
        }

        if (a[i] != n && a[i] != n) p[i / 2].second = tmp;
        if (a[i] == n) a[i + 1] = p[i / 2].first;
        else if (a[i + 1] == n) a[i] = p[i / 2].first;
        else if (a[i] == 1) a[i + 1] = p[i / 2].second;
        else if (a[i + 1] == 1) a[i] = p[i / 2].second;
    }

    if (n & 1) {
        if (count(a + 1, a + n, n) == 0) a[n] = n;
        else if (count(a + 1, a + n, 1) == 0) a[n] = 1;
    }

    ll l1 = find(a + 1, a + n + 1, 1) - a;

    for (ll i = 1; i <= n; i++) {
        if (a[i] != 0) continue;
        cout << "? 1 " << l1 << " " << i << " " << n-1 << endl;
        ll tmp;
        cin >> tmp;
        a[i] = tmp;
        if (p[(i - 1) / 2].first == tmp) tmp = p[(i - 1) / 2].second;
        else if (p[(i - 1) / 2].second == tmp) tmp = p[(i - 1) / 2].first;
        if (i & 1) a[i + 1] = tmp;
        else a[i - 1] = tmp;
    }
    cout << "! ";
    for (ll i = 1; i <= n; i++) cout << a[i] << ' ';
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}