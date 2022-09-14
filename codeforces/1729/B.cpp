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
		ll n;
		string s, ans;
		cin >> n >> s;
		ll p = n - 1;
		while(p >= 0){
			if(s[p]=='0'){
				ans.push_back((char)((s[p - 2] - '0') * 10 +(s[p - 1] - '0') + 'a' - 1));
				p -= 3;
			} 
			else{
				ans.push_back((char)('a' + s[p] - '0' - 1));
				--p;
			}
		}
		reverse(ans.begin(),ans.end());
		cout << ans << "\n";
    }    
    return 0;
}