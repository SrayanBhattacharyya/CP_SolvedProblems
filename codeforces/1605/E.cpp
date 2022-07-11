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

ll ub(ll a,ll b){
    if (a < 0) return (a / b);
    else return ((a + b - 1) / b);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector <ll> a(n+1),b(n+1),c(n+1,0);
        for(ll i=0;i<n;i++){
                cin >> a[i+1];
        }
        for(ll i=0;i<n;i++){
                cin >> b[i+1];
        }
        b[1] = 0;
        c[1] = -1;
        vector <pair<ll,ll>> v;
        ll extra = 0;
        for(ll i=1;i<=n;i++){
                v.push_back(make_pair(a[i]-b[i],c[i]));
                for(ll j=2*i;j<=n;j+=i){
                        a[j] -= a[i];
                        a[j] += b[i];
                        c[j] -= c[i];
                }
        }
        for(ll i=0;i<n;i++){
                if(v[i].second<0){
                        v[i].second = -v[i].second;
                        v[i].first = -v[i].first;
                }
        }
        vector <pair<ll,ll>> w;
        for(ll i=0;i<n;i++){
                if(v[i].second == 0) extra += abs(v[i].first);
                else w.push_back(make_pair(ub(-v[i].first,v[i].second),i));
        }
        sort(w.begin(),w.end());
        ll sum1 = 0,sum2 = 0,k1 = 0,k2 = 0;
        ll m;
        cin >> m;
        vector <pair<ll,ll>> q(m);
        for(ll i=0;i<m;i++){
                q[i].second = i;
                cin >> q[i].first;
        }
        sort(q.begin(),q.end());
        vector <ll> ans(m,0);
        for(ll i=0;i<(ll)w.size();i++){
                k1 += v[w[i].second].second;
                sum1 += v[w[i].second].first;
        }
        ll cur = -1;
        for(ll i=0;i<m;i++){
                while(cur<((ll)w.size()-1) && w[cur+1].first<=q[i].first){
                        cur++;
                        k1 -= v[w[cur].second].second;
                        k2 += v[w[cur].second].second;
                        sum1 -= v[w[cur].second].first;
                        sum2 += v[w[cur].second].first;
                }
                ans[q[i].second] = -(sum1+k1*q[i].first) + (sum2 + k2*(q[i].first));
        }
        for(ll i=0;i<m;i++){
                cout << ans[i]+extra << endl;
        }
    }    
    return 0;
}