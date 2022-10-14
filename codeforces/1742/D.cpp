#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define all(v) v.begin(),v.end()

const ll N = 1e3 + 10;
ll Max[N];

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector <ll> a(n);
        vector <vector<ll>> used(1001);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            used[a[i]].push_back(i + 1);
        }
        for(ll i = 0; i <= 1000; i++) sort(all(used[i]));
        ll ans = -1;
        for(ll i = 1; i <= 1000; i++){
            for(ll j = 1; j <= 1000; j++){
                if((ll)used[i].size() && (ll)used[j].size() && gcd(i, j) == 1) ans = max(ans, used[i].back() + used[j].back());
            }
        }
        cout << ans << '\n';
    }
}
