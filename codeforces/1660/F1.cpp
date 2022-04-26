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
typedef vector <string> vs;
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
ll pwr(ll a, ll b) { ll res = 1; while (b > 0) {if (b & 1) res = res * a ; a = a * a; b >>= 1;} return res;}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n; 
        string s; cin >> s;
        int p = 0,  m = 0;
        int cnt[n + 1][2];
        cnt[0][0] = 0; cnt[0][1] = 0; //First Row --> (+) and Second Row --> (-)
        for (int i = 1; i <= n; i++){
            if (s[i - 1] == '+') p++;
            else m++;
            cnt[i][0] = p; cnt[i][1] = m;
        }
        int ans = 0;
        rep_a(i, 1, n+1){
            rep_a(j, i+1, n+1){
                p = cnt[j][0] - cnt[i-1][0];
                m = cnt[j][1] - cnt[i-1][1];
                if (m >= p && (m- p) % 3 == 0) ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}