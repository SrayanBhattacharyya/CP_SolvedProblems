//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 5;
ll val[N]; char a[N];

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll sum = 0;
        for(ll i = 1; i <= n; i++) {
            char c; cin >> c;
            a[i] = c;
            if(c == 'L') {
                val[i] = n - i - (i - 1);
                sum += i - 1;
            } 
            else {
                val[i] = i - 1 - (n - i);
                sum += n - i;
            }
        }
        sort(val + 1, val + n + 1);
        for(int i=n; i>=1; i--) {
            sum += max(val[i], 0LL);
            cout << sum << " ";
        }
        cout << "\n";
    }
}