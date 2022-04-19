//Srayan Bhattacharyya JU EE
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mods 998244353
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <ll> vll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define min3(a,b,c) min(min((a),(b)),(c))
#define st(s) sort(s.begin(),s.end())
#define dst(s) sort(s.begin() , s.end() , greater<int>())
const ll mod = 1000000007;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t, n, ans, k;
    t = 1;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> k;
        if (n == 1) 
        {
            cout << 0 << "\n";
            continue;
        }
        ll days = 0;
        ll curr = 1;
        while (1)
        {
            if (curr > k)break;
            curr *= 2;
            days++;
            if (curr >= n)
            {
                ans = days;
                break;
            }
        }
        if (curr < n)
        {
            ans = days + ceil_div(n - curr, k);
        }
        cout << ans << "\n";
    }
    return 0;
}