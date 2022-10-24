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
        string s1, s2;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        if (s1 == s2) {
            cout << 0 << "\n";
            continue;
        }
        ll h1 = 0, h2 = 0, fl = 0;
        string ans;
        while (1) {
            if (s1[h1] == s2[h2]) {
                ans += '0';
                h1++, h2++;
            } 
            else if (s1[h1] > s2[h2]) {
                if (h2 == s2.length() - 1) {
                    fl = -1;
                    break;
                } 
                else {
                    if (s2[h2 + 1] == '1') {
                        ans += char('0' + (10 + (s2[h2] - '0') - (s1[h1] - '0')));
                        h1++, h2 += 2;
                    } 
                    else {
                        fl = -1;
                        break;
                    }
                }
            } 
            else {
                ans += char('0' + (s2[h2] - s1[h1]));
                h1++, h2++;
            }
            if (fl == -1 || h1 == s1.length() || h2 == s2.length()) {
                if (h1 != s1.length() && h2 == s2.length()) fl = -1;
                else {
                    if (h1 == s1.length() && h2 != s2.length()) {
                        s1 += '0';
                        continue;
                    }
                }
                break;
            }
        }
        if (fl == -1) cout << "-1" << "\n";
        else {
            reverse(ans.begin(), ans.end());
            ll now = 0;
            for (auto i : ans) {
                if (i != '0') now = 1;
                if (now) cout << i;
            }
            cout << "\n";
        }
    }    
    return 0;
}