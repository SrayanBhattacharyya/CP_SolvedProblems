//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    string s; cin >> s;
    ll conseq = 0, maxconseq = INT_MIN, zerocnt = 0;
    char prevc = '4';
    for (auto& c : s) {
        if (c == prevc) conseq++;
        else conseq = 1;
        maxconseq = max(maxconseq, conseq);
        zerocnt += c == '0';
        prevc = c;
    }
    cout << max(maxconseq * maxconseq, zerocnt * (n - zerocnt)) << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}