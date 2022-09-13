//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 10;
ll a[N]; bool mark[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll n, k;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    sort (a + 1, a + n + 1);
    ll res = n;
    for(ll i = 1; i <= n; i++){
        ll j = i - 1;
        while(j >= 1 && a[i] > a[j] && a[i] <= a[j] + k && !mark[j]){
            mark[j] = true;
            res--;
            j--;
        }
    }
 
    cout << res;
	return 0;
}