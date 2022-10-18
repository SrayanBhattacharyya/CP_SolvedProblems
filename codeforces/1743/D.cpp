#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(),v.end()

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    reverse(all(s));
    while (!s.empty() && s.back() == '0') {
        s.pop_back();
    }
    if (s == "") {
        cout << 0 << endl;
        return;
    }
    n = s.size();
    reverse(all(s));
    int pos2 = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
 
            pos2 = i;
            break;
        }
    }
    if (pos2 == -1) {
        cout << s << endl;
        return;
    }
    string ans = s;
    auto calcAns = [&](int pos1)->string{
        int curr1 = pos2, curr2 = pos1;
        string c = s;
        while (curr1 < n) {
            if (s[curr1] == '1' || s[curr2] == '1') {
                c[curr1] = '1';
            }
            curr1++;
            curr2++;
        }
        return c;
    };
    for (int i = 0; i < pos2; i++) ans = max(ans, calcAns(i));
    cout << ans << endl;
}
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
        solve();
    }   
    return 0;
}