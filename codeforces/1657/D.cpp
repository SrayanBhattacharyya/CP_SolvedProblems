#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); ++i)
 
int main(){
	int n, C;
	scanf("%d%d", &n, &C);
	vector<long long> bst(C + 1);
	forn(i, n){
		int c, d, h;
		scanf("%d%d%d", &c, &d, &h);
		bst[c] = max(bst[c], d * 1ll * h);
	}
	for (int c = 1; c <= C; ++c) for (int xc = c; xc <= C; xc += c)
		bst[xc] = max(bst[xc], bst[c] * (xc / c));
	forn(c, C)
		bst[c + 1] = max(bst[c + 1], bst[c]);
	int m;
	scanf("%d", &m);
	forn(j, m){
		int D;
		long long H;
		scanf("%d%lld", &D, &H);
		int mn = upper_bound(bst.begin(), bst.end(), D * H) - bst.begin();
		if (mn > C) mn = -1;
		printf("%d ", mn);
	}
	puts("");
}