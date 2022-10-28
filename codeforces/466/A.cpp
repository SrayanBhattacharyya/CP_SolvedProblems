//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--) {
        ll n, m, a, b, sum = 0;
        cin >> n >> m >> a >> b;
        if (a * m > b)
        {
            sum = (n / m) * b;
            n %= m;
            if (a * n < b) sum += a * n;
            else sum += b;
        }
        else sum = n * a;
        cout << sum;
    }    
    return 0;
}