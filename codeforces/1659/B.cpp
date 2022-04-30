//Srayan Bhattacharyya JU EE
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mods 998244353
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <string> vs;
typedef vector <pair<int,int>> vpii;
typedef vector <ll> vll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define min3(a,b,c) min(min((a),(b)),(c))
#define st(s) sort(s.begin(),s.end())
#define dst(s) sort(s.begin() , s.end() , greater<int>())
#define INT_MAX 1e18
const ll mod = 1000000007;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll pwr(ll a, ll b) { ll res = 1; while (b > 0) {if (b & 1) res = res * a ; a = a * a; b >>= 1;} return res;}

vs split(string s, string del = " "){            
    vs ans; ll start = 0; ll end = s.find(del);
    while (end != -1) {
        cout << s.substr(start, end - start) << endl;
        start = end + del.size(); 
        end = s.find(del, start);
    }
    ans.push_back(s.substr(start, end - start)); 
    return ans;
}

vi divisors(int n){
    vi v;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            v.emplace_back(i);
            if ((n / i) != i) v.emplace_back(n / i);
        }
    }
    return v;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)  {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        vi zero, one; int ans[n];
        rep(i, n){
            ans[i] = 0;
            if(s[i] == '0') zero.push_back(i);
            else one.push_back(i);
        }
        int count = 0;
        if(k % 2) {
            for(int i = 0; i < min(k, (int)one.size()); i++) {
                ans[one[i]] = 1;
                count++;
            }
        } 
        else{
            for(int i = 0; i < min(k, (int)zero.size()); i++) {
                ans[zero[i]] = 1;
                count++;
            }
        }
        ans[n-1] += k-count;
        for(int i = 0; i < n; i++)  {
            if(k%2) {
                if(ans[i]%2 == 0)    {
                    s[i] = '0' + ('1' - s[i]);
                }
            } else {
                if(ans[i]%2 == 1)    {
                    s[i] = '0' + ('1' - s[i]);
                }
            }
        }
        cout << s << "\n";
        for(int i = 0; i < n; i++)  {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}