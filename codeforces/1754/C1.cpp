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
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum%2 != 0) {
            cout<<-1<<"\n";
            continue;
        }
        ll x = sum / 2;
        ll b[n] = {0};
        for (ll i = 1; i < n; i++)
            if ((x < 0 && a[i] < 0) || (x > 0 && a[i] > 0))
                if (!b[i - 1]) {
                    b[i] = 1;
                    if (x > 0) x--;
                    else if (x<0) x++;
                }
        if (x) {
            cout << -1 << "\n";
            continue;
        }
        vector <pair <ll,ll>> v;
        for (ll i = 0; i < n; i++) {
            if (i + 1 < n && b[i+1]) {
                v.push_back({i + 1, i + 2});
                i++;
            }
            else v.push_back({i+1,i+1});
        }
        cout << v.size() << "\n";
        for (ll i = 0 ;i < v.size(); i++)
            cout<<v[i].first<<" "<<v[i].second<<"\n";
 
    }    
    return 0;
}