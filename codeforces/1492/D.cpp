//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b, k; 
    cin >> a >> b >> k;
    string s1 = "", s2 = "";
    if ((a == 0 || b == 1) && k != 0) {
        cout << "No\n";
        return 0;
    }
    else if ((a == 0 || b == 1) && k == 0) {
        while (b > 0) {
            b--; 
            s1 += '1'; s2 += '1'; 
        }
        while (a > 0) {
            a--; 
            s1 += '0'; s2 += '0'; 
        }
        cout << "Yes\n";
		cout << s1 << "\n";
		cout << s2 << "\n";
        return 0;
    }
    if (k > a + b - 2) {
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
	if (k == 0) {
		for(ll i = 0; i < a; ++i) {
			s1 += '0';
			s2 += '0';
		}
		for(ll i = 0; i < b; ++i) {
			s1 += '1';
			s2 += '1';
		}
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		cout << s1 << "\n";
		cout << s2 << "\n";
		return 0;
	}
    b--; s1 += '0'; s2 += '1';
    a--; b--; k--; 
    while (k > 0) {
        if(a > 0) {
			s1 += '0';
			s2 += '0';
			--a; --k;
		}
		else {
			s2 += '1';
			s1 += '1';
			--b; --k;
		}
    }
    s1 += '1'; s2 += '0';
    while(a > 0) {
		s1 += '0';
		s2 += '0';
		--a;
	}
	while(b > 0) {
		s1 += '1';
		s2 += '1';
		--b;
	}
	s1 += '1';
	s2 += '1';
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	cout << s1 << "\n";
	cout << s2 << "\n";
    return 0;
}