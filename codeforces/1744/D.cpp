#include<bits/stdc++.h>
using namespace std;
#define ll long long

int getTwoCount(int n)
{
	int exponent = n & -n;
	return __builtin_ctz(exponent);
}
 
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (auto& e : a)
		cin >> e;
 
	int count = 0;
	for (auto& e : a)
		count += getTwoCount(e);
	if (count >= n)
	{
		cout << 0 << '\n';
		return;
	}
 
	vector<int> twoCount(n);
	for (int i = 0; i < n; ++i)
		twoCount[i] = getTwoCount(i + 1);
 
	sort(twoCount.begin(), twoCount.end(), greater<>());
	int ans = 0;
	for (auto e : twoCount)
	{
		count += e;
		++ans;
		if (count >= n)
		{
			cout << ans << '\n';
			return;
		}
	}
 
	cout << -1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();        
    }    
    return 0;
}