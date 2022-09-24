//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(a, b, c) for(int a = (b); a < (c); a++)
const ll N = 300005;
int n, k, a[N], h[60], tot;

int main(){
	scanf("%d %d", &n, &k);
	tot = (1 << k) - 1;
	fi(i, 0, n){
		int s;
		fi(j, 0, k){
			scanf("%d", &s);
			a[i] |= s << j;
		}
		
		if(!a[i]){
			puts("YES");
			return 0;
		}
		
		int ori = tot ^ a[i];
		for(int j = ori; j; j = (j - 1) & ori) if(h[j]){
			puts("YES");
			return 0;
		}
		
		h[a[i]] = 1;
	}
	
	puts("NO");
}
