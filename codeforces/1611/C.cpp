#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
typedef long long ll;
//Srayan Bhattacharyya JU EE

void solve(){
    int n; cin >> n;
	vector<int>a(n);
	rep(i, n) cin >> a[i];
	if(a[0] != n && a[n - 1] != n)
	{
		cout << -1 << endl;
		return;
	}
	vector<int>b;
	for(auto x : a) if(x != n) b.push_back(x);
	reverse(b.begin() , b.end());
	b.push_back(n);
	for(auto x : b) cout << x << ' ';
	cout << "\n";
}

int main()
{
    int t; cin >> t;
    while (t--){
        solve();
    }
    return 0;
}