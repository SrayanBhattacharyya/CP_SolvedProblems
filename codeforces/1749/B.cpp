#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+1;

int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n],b[n];
		long long ans = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ans += a[i];
		}
		int temp = 0;
		for(int i = 0; i < n; i++) cin >> b[i];
		for(int i = 0; i < n; i++){
			ans += b[i];
			temp = max(temp,b[i]);
		}
		cout << ans-temp << endl;
	}
	return 0;
}