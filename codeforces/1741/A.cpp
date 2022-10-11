//Srayan Bhattachrayya JU EE
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "=\n";
        return;
    }
    int ax = count (a.begin(), a.end(), 'X'), bx = count (b.begin(), b.end(), 'X');
    map<char, int> mp;
    mp['S'] = 0;
    mp['M'] = 1;
    mp['L'] = 2;
    if (mp[a.back()] < mp[b.back()]) cout << "<\n";
    else if  (mp[a.back()] > mp[b.back()]) cout << ">\n";
    else {
        if (a.back() == 'L') {
            if (ax < bx) cout << "<\n";
            else cout << ">\n";
        } 
        else {
            if (ax < bx) cout << ">\n";
            else cout << "<\n";
        }
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc = 1;
    cin >> tc;
    while (tc--){
        solve();
    }
    return 0;
}