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
        queue <ll> pq[30];
        ll n;
        cin >> n;
        map <ll, ll> count;
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            count[x]++;
            for (ll j = 0; j < 30; j++) {
                if ((1ll << j)) {
                    pq[j].push(x);
                }
            }
        }
        ll res = 0;
        for (ll i = 29; i >= 0; i--) {
            if (pq[i].empty()) continue;
            ll nextOr = res;
            ll element = -1;
            while (!pq[i].empty()) {
                ll cur = (res | pq[i].front());
                if (cur > nextOr) {
                    nextOr = cur;
                    element = pq[i].front();
                }
                pq[i].pop();
            }
            if (element != -1) {
                res = nextOr;
                cout << element << " ";
                count[element]--;
            }
        }
        for (auto &i: count) {
            for (ll j = 0; j < i.second; j++) cout << i.first << " ";
        }
        cout << "\n";
    }    
    return 0;
}