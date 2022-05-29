#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int main(){
	int t;
	cin>>t;
	int arr[10];
	while(t--){
		for(int i=0;i<7;i++) cin>>arr[i];
		a=arr[0];
		b=arr[1];
		int index=2;
		if(arr[index]==(a+b)) index++;
		cout<<a<<" "<<b<<" "<<arr[index]<<endl;
	}
	return 0;
}