//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll q, x, y;
    cin >> q >> x;
    ll h[x] = {}, cmex = 0;
    while(q--) {
        cin >> y;
        ll r = (y % x);
        if(y == cmex) cmex++;
        else h[r]++;
        while(1){
            if (h[(cmex % x)]) {
                h[(cmex % x)]--;
                cmex++;
            }
            else break;
        }
        cout << cmex << "\n";
    }
}