//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll a, b, ans, l1, l2;
    a = 1, b = 2;
    while (1) {
        cout << "? " << a << ' ' << b << endl;
        cin >> l1;
        if (l1 == -1) {
            ans = b - 1;
            break;
        }
        cout << "? " << b << ' ' << a << endl;
        cin >> l2;
        if (l1 != l2) {
            ans = l1 + l2;
            break;
        }
        ++b;
    }
    cout << "! " << ans << endl;
	return 0;
}