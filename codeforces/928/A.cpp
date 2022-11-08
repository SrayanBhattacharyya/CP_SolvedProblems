//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string t;
    cin >> t;
    int n;
    cin >> n;
    map <string, bool> mp;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if('A' <= s[j] && s[j] <= 'Z') s[j] = 'a' + (s[j] - 'A');
            if(s[j] == '0') s[j] = 'o';
            if(s[j] == 'i' || s[j] == 'l') s[j] = '1';
        }
        mp[s] = true;
    }
    string s = t;
    for (int j = 0; j < s.length(); j++) {
        if('A' <= s[j] && s[j] <= 'Z') s[j] = 'a' + (s[j] - 'A');
        if(s[j] == '0') s[j] = 'o';
        if(s[j] == 'i' || s[j] == 'l') s[j] = '1';
    }
    if (mp[s] == true) cout << "No";
    else cout << "Yes";  
    return 0;
}