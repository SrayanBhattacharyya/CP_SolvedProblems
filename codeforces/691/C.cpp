//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string s; cin >> s;
	ll pos = -1, f = -1;
	for (ll i = 0; i < s.size(); i++){
		if(s[i] == '.') {pos = i;}
		if(s[i] != '0' && s[i] != '.' && f == -1) f = i;
	}
	if (pos == -1) {pos = s.size(); s += ".0";}
	if (f == -1) {cout << 0; return 0;}
	string ans; ll y;
	if (f < pos){
		ans = s[f];
		ans.push_back('.');
		if (pos - f - 1 > 0)
		ans += s.substr(f + 1, pos - f - 1);
		if (pos + 1 < s.size())
		ans += s.substr(pos + 1);
		y = pos - f - 1;
	}
	else{
		ans = s[f];
		ans.push_back('.');
		ans += s.substr(f + 1);
		y = pos - f;
	}
	while(ans.size() > 0 && ans.back () == '0') ans.pop_back();
	if (ans.size() > 0 && ans.back() == '.') ans.pop_back();
	cout << ans;
	if (y != 0) cout << "E" << y;

    return 0;
}