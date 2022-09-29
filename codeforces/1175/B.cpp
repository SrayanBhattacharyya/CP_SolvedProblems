//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
	stack <ll> a, b;
	b.push(0);
	while (n--) {
		string s; cin >> s;
		if (s == "add") {
			ll x = b.top();
			b.pop();
			b.push(x + 1);
		}
		else if (s == "for") {
			ll x; cin >> x;
			a.push(x);
			b.push(0);
		}
		else {
			ll x = a.top() * b.top();
			a.pop();
			b.pop();
			x += b.top();
			b.pop();
			b.push(x);
		}
		if (b.top() >= (1LL << 32)) {cout << "OVERFLOW!!!"; exit(0);}
	}
	cout << b.top() << "\n";
    return 0;
}