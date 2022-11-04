//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1e5 + 50;
ll a[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n; cin >> n;
        ll sum1 = 0, sum2 = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] >= 0) sum1 += a[i];
            else sum2 -= a[i];
        }
        cout << abs(sum1 - sum2) << "\n";
    }    
    return 0;
}