//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 5005;
const int mod = 1e9 + 7;
int f[N][N] = {0},s[N][N] = {0}, i, j, k, n;
char c;


int main(){
    int n; cin >> n;
	f[1][0] = 1;
	for (i = 1; i <= n; i++) {
		s[i][0] = f[i][0];
		for (j = 1; j <= i; j++) s[i][j] = (s[i][j-1] + f[i][j]) % mod; 
		cin >> c;
		if (c == 'f') {
			for (j = 0; j <= i; j++) f[i+1][j+1] = f[i][j];
		}
		else if (c == 's') {
			f[i+1][0] = s[i][i];
			for (j = 1; j <= i; j++) f[i+1][j] = (s[i][i] - s[i][j-1] + mod) % mod;
		}
	}
	k = 0;
	for (i = 0; i <= n; i++) k =  k + s[n][i];
	cout << s[n][n];
    return 0;
}