//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    ll n; cin >> n;
    ll x1 = 0, y1 = 0, x2 = 1, y2 = 0;
    for (ll i = 0; i < n * n; i++){
        ll c; cin >> c;
        if (c != 1 && x1 < n && y1 < n) {
			cout << "1 " << x1 + 1 << " " << y1 + 1 << "\n" << flush;
			x1 += 2;
			if (x1 >= n) {
				y1++;
				x1 %= 2;
				x1 = 1 - x1;
			}
			continue;
		}
		if (c != 2 && x2 < n && y2 < n) {
			cout << "2 " << x2 + 1 << " " << y2 + 1 << "\n" << flush;
			x2 += 2;
			if (x2 >= n) {
				y2++;
				x2 %= 2;
				x2 = 1 - x2;
			}
			continue;
		}
		if (x1 < n && y1 < n) {
			cout << "3 " << x1 + 1 << " " << y1 + 1 << "\n" << flush;
			x1 += 2;
			if (x1 >= n) {
				y1++;
				x1 %= 2;
				x1 = 1 - x1;
			}
		} else {
			cout << "3 " << x2 + 1 << " " << y2 + 1 << "\n" << flush;
			x2 += 2;
			if (x2 >= n) {
				y2++;
				x2 %= 2;
				x2 = 1 - x2;
			}
		}        
    }
}