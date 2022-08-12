//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,n) for(ll i=0;i<n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define rev_a(i,a,n) for(ll i=n;i>=a;i--)
#define rep_a(i,a,n) for(ll i=a;i<n;i++)
typedef pair <ll, ll> pll;
typedef vector <ll> vll;
typedef vector <vll> vvll;
typedef vector <string> vs;
typedef set <ll> sll;
typedef vector <pll> vpll;
typedef vector <long double> vld;
#define st(s) sort(s.begin(),s.end())
#define dst(s) sort(s.begin() , s.end() , greater<int>())
#define all(s) s.begin(), s.end()
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define print(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout << *it << " "; cout << "\n";
const ll MOD = 1e9 + 7; 
const ll MODS = 998244353; 
const ll NN = 1e7 + 10; 
const ll NS = 1e5 + 10;
const ll LLMAX = 1e18; 
const ld pi = 3.14159265358979323846;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll lcm(ll a, ll b) {return (a * b) / gcd(a, b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll mod_mul(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a * b) % MOD) + MOD) % MOD;}
ll mods_mul(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a * b) % MODS) + MODS) % MODS;}
ll mod_add(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a + b) % MOD) + MOD) % MOD;}
ll mod_inv(ll i) {if (i == 1) return 1; return (MOD - ((MOD / i) * mod_inv(MOD % i)) % MOD) % MOD;}
ll mods_inv(ll i) {if (i == 1) return 1; return (MODS - ((MODS / i) * mod_inv(MODS % i)) % MODS) % MODS;}
ll mod_pwr(ll a, ll b) { if(b < 0) return 0; ll res = 1; while (b > 0) {if (b & 1) res = res * a % MOD; a = a * a % MOD; b >>= 1;} return res;}
ll mod_div(ll a, ll b) {a = a % MOD; ll inv = mod_inv(b); if (inv == -1) return -1; else {ll ans = (inv * a) % MOD; return ans;}}
ll mods_div(ll a, ll b) {a = a % MODS; ll inv = mod_inv(b); if (inv == -1) return -1; else {ll ans = (inv * a) % MODS; return ans;}}

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

template <class K, class V> using um = unordered_map <K, V, custom_hash>;

vs split(string s, string del = " "){
    vs ans; ll start = 0; ll end = s.find(del);
    while (end != -1) {
        cout << s.substr(start, end - start) << "\n";
        start = end + del.size(); 
        end = s.find(del, start);
    }
    ans.push_back(s.substr(start, end - start)); 
    return ans;
}

vll divisors(ll n){
    vll v;
    for (ll i = 1; i <= (ll)sqrt(n); i++){
        if (n % i == 0){
            v.emplace_back(i);
            if ((n / i) != i) v.emplace_back(n / i);
        }
    }
    return v;
}

vll findPrimeFactors(ll n){
    vll primeFactors;
    while (n%2== 0) primeFactors.push_back(2), n = n/2;
    for (ll i = 3; i*i <= n; i = i+2){
        while (n%i == 0){   
            primeFactors.push_back(i);
            n = n/i;
        }
    }
    if (n > 2) primeFactors.push_back(n);
    return primeFactors;
}

bool isPrime(ll n){
	if (n == 1) return false;
    if(n==2 or n==3) return true;
    if(n%2==0) return false;
    for(ll i=3; i * i <= n; i += 2) if(n % i==0) return false;
    return true;
}

ll *fact;
void calFact(){
    fact = new ll[NN];
    fact[0] = 1;
    fact[1] = 1;
    for (ll i = 2; i < NN; i++)
        fact[i] = mod_mul(fact[i - 1], i);
}
 
ll ncr(ll n, ll r){
    ll ans = fact[n];
    ans = mod_mul(ans, mod_inv(fact[n - r]));
    ans = mod_mul(ans, mod_inv(fact[r]));
    return ans;
}

bool isKthBitSet(ll n, ll k){
    if ((n >> k) & 1)
        return true;
    return false;
}

bool isPalindrome(string S){
    string P = S;
    reverse(all(P));
    if (S == P) return true;
    else return false;
}

ll digitsum(ll x){
	ll ans=0;
	while(x > 0) ans += x % 10, x /= 10;
	return ans;
}

void solve(){}

ll n,m;
char mp[60][60];
ll nt1[] = {1,-1,0,0};
ll nt2[] = {0,0,1,-1};
ll num1,num2;
bool vis[60][60];

void dfs(ll x,ll y){
    vis[x][y] = 1;
    if(mp[x][y]=='#' || mp[x][y]==0) return;
    if(mp[x][y]=='G') num1++;
    else if(mp[x][y]=='B') num2++;
    rep(i, 4){
        if(vis[x + nt1[i]][y + nt2[i]]) continue;
        dfs(x + nt1[i], y +  nt2[i]);
    }
}

int main(){
    ll t = 1;
    cin >> t;
    while (t--){
        cin >> n >> m;
        memset(mp, 0, sizeof(mp));
        memset(vis, 0, sizeof(vis));
        rep_a(i, 1, n + 1) scanf("%s",mp[i] + 1);
        ll g = 0;
        rep_a(i, 1, n + 1){
            rep_a(j, 1, m + 1){
                if(mp[i][j]=='B'){
                    rep(k, 4){
                        if(mp[i + nt1[k]][j + nt2[k]]== '.') mp[i + nt1[k]][j + nt2[k]] = '#';
                    }
                }
                else if(mp[i][j]=='G') g++;
            }
        }
        num1 = num2 = 0;
        dfs(n, m);
        if(num1 == g && num2 == 0) yes; else no;
    }    
    return 0;
}