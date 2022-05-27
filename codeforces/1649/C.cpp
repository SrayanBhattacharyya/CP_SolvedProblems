#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;
int n,m,Maxc;
vector<int> x[100005],y[100005];
signed main()
{
	int c;
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%lld",&c);
			x[c].push_back(i);
			y[c].push_back(j);
			Maxc=max(c,Maxc);
		}
	}
	int ans=0;
	for(int i=1;i<=Maxc;i++)
	{
		sort(x[i].begin(),x[i].end());
		sort(y[i].begin(),y[i].end());
		for(int j=1;j<x[i].size();j++)
			ans+=(x[i][j]-x[i][j-1])*j*(x[i].size()-j);
		for(int j=1;j<y[i].size();j++)
			ans+=(y[i][j]-y[i][j-1])*j*(y[i].size()-j);
	}
	printf("%lld\n",ans);
	return 0;
}