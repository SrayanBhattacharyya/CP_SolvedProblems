#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define fo(i,a,b) for(i=a;i<=b;i++)
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

//Srayan Bhattacharyya JU EE

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t, n, i, j, q;
    t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vll>a(n + 3, vll(n + 1, 0));
        fo(i, 1, n)
        {
            cin >> a[0][i];
        }
        fo(i, 1, n + 2)
        {
            vll cnt(n + 1, 0);
            fo(j, 1, n)cnt[a[i - 1][j]]++;
            fo(j, 1, n)a[i][j] = cnt[a[i - 1][j]];
        }
        cin >> q;
        while (q--)
        {
            ll x, k;
            cin >> x >> k;
            if (k > n + 2)k = n + 2;
            cout << a[k][x] << "\n";
        }
    }
    return 0;
}