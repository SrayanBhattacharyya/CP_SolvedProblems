#include<bits/stdc++.h>
using namespace std;
 
long long arr[105];
 
int main(){
	int t;
	int n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		long long ans = arr[0];
		for(int i = 2; i < n; i += 2){
			ans = __gcd(ans, arr[i]);
		} 
		bool flag = 0;
		for(int i = 1; i < n; i += 2){
			if(arr[i] % ans == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			cout << ans << endl;
			continue;
		}
		ans = arr[1];
		flag = 0;
		for(int i = 3; i < n; i += 2){
			ans = __gcd(arr[i], ans);
		} 
		for(int i = 0; i < n; i += 2){
			if(arr[i] % ans == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			cout << ans << endl;
		}else{
			cout << "0" << endl;
		}
	}
	return 0;
}