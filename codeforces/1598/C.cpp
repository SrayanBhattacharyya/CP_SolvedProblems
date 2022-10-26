//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        ll n;
        cin >>  n;
        vector <ll> v(n);
        ll s = 0;
        for(ll i=0;i<n;i++){
            cin >> v[i];
            s += v[i];
        }
        if((2*s)%n!=0) cout << 0 << "\n";
        else {
            ll ans = 0;
            map <ll,ll> mp;
            for(ll i=0;i<n;i++){
                ans += mp[((2*s)/n)-v[i]];
                mp[v[i]]++;
            }
            cout << ans << "\n";
        }
    }    
    return 0;
}