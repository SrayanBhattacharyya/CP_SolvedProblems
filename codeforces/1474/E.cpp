//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)	{
    	int n; 
    	cin >> n;
	long long array[n];
	for(int i = 1; i <= n; i++)	{
		array[i] = i;
	}
	long long ans = 0;
	vector<pair<int, int> > v;
	for (long long i = 1; i <= n; i++)
	{
		if (array[i] != i)	{
			continue;
		}
		if ((n-i) > (i-1))	{
			ans += (n - i) * (n - i);
			v.push_back(make_pair(array[i], n));
			swap(array[i], array[n]);
		}
		else	{
			ans += (i-1)*(i-1);
			v.push_back(make_pair(array[i], 1));
			swap(array[i], array[1]);
			}
	}

	cout << ans << '\n';

	for (int i = 1; i <= n; i++)	{
		cout << array[i] << " ";
	}
	cout << "\n";

	reverse(v.begin(), v.end());
	cout << v.size() << "\n";

	for (int i = 0; i < v.size(); i++)	{
		cout << v[i].first << " " << v[i].second << "\n";
		}
    }
    return 0;
}