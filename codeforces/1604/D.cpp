#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
#define mods 998244353
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <ll> vll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define min3(a,b,c) min(min((a),(b)),(c))
#define st(s) sort(s.begin(),s.end())
#define dst(s) sort(s.begin() , s.end() , greater<int>())
//Srayan Bhattacharyya JU EE

ll ceil_div(ll a, ll b){
    if (a % b == 0) return a / b;
    else return a / b + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
        ll x, y; cin >> x >> y;
        ll n;
        if (x > y) n = (x + y);
		else if (3 * x > y) n = (x + y) / 2;
		else
		{
			ll k1 = (y - 2 * x) % x == 0 ? (y - 2 * x) / x + 1 : ceil_div(y - 2 * x, x);
			n = (k1 * x + y) / 2;
		}
		cout << n << "\n";
    }
    return 0;
}