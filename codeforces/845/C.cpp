//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector <pair <int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    int f = -1, s = -1;
    bool ok = true;
    for (auto i : v) {
        if (i.first <= f && i.first <= s) {
            ok = false; break;
        }
        if (i.first > f) f = i.second;
        else s = i.second;
    }
    if (ok) cout << "YES";
    else cout << "NO";
    return 0;
}