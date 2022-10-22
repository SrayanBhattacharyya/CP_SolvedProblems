//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    ll n = s.size();
    for(int i = 1; i < n - 1; i++){
        if(s[i] == s[i - 1]) {
            if(s[i - 1] == 'a' || s[i + 1] == 'a') {
                if(s[i - 1] == 'b' || s[i + 1] == 'b') s[i] = 'c';
                else s[i]='b';
            }
            else s[i]='a';
        }
    }
    if(s[n - 2] == s[n - 1]) {
            if(s[n - 1] == 'a' || s[n - 3] == 'a') {
                if(s[n - 2 - 1] == 'b' || s[n - 2 + 1] == 'b') s[n - 2] = 'c';
                else s[n - 2] = 'b';
            }
            else s[n - 2] = 'a';
        }
    cout << s << "\n";
    return 0;
}