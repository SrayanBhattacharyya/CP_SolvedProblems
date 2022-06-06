//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
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
const ll MOd = 1e9 + 7; 
const ll MOdS = 998244353; 
const ll NN = 1e7 + 10; 
const ll NS = 1e5 + 10;
const ll llMAx = 1e18; 
const lld pi = 3.14159265358979323846;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll mod_mul(ll a, ll b) {a = a % MOd; b = b % MOd; return (((a * b) % MOd) + MOd) % MOd;}
ll mods_mul(ll a, ll b) {a = a % MOd; b = b % MOd; return (((a * b) % MOdS) + MOdS) % MOdS;}
ll mod_add(ll a, ll b) {a = a % MOd; b = b % MOd; return (((a + b) % MOd) + MOd) % MOd;}
ll mod_inv(ll i) {if (i == 1) return 1; return (MOd - ((MOd / i) * mod_inv(MOd % i)) % MOd) % MOd;}
ll mods_inv(ll i) {if (i == 1) return 1; return (MOdS - ((MOdS / i) * mod_inv(MOdS % i)) % MOdS) % MOdS;}
ll mod_pwr(ll a, ll b) { if(b < 0) return 0; ll res = 1; while (b > 0) {if (b & 1) res = res * a % MOd; a = a * a % MOd; b >>= 1;} return res;}
ll mod_div(ll a, ll b) {a = a % MOd; ll inv = mod_inv(b); if (inv == -1) return -1; else {ll ans = (inv * a) % MOd; return ans;}}
ll mods_div(ll a, ll b) {a = a % MOdS; ll inv = mod_inv(b); if (inv == -1) return -1; else {ll ans = (inv * a) % MOdS; return ans;}}
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

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
    for (ll i = 3; i*i <= n; i = i+2)
    {
        while (n%i == 0)
        {   
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

void solve(){}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    //cin >> t;
    while (t--){
        ll k, l, r, t, x, y; cin >> k >> l >> r >> t >> x >> y;
        if (y <= x){
            if (k > r - y){
                ll d1 = (k - r + y + x  - 1) / x;
                ckmin(d1, t);
                t -= d1;
                k -= d1 * x;
                if (k < l) {cout << "No" << "\n"; return 0;}
            }
            if (x == y) { cout << "Yes" << "\n"; return 0;}
            ll maxday = (k-l)/(x-y);
            cout << (maxday >= t? "Yes" : "No") << "\n";
        } 
        else{
            if (k <= r-y) {
                ll d1 = (r - y + 1 - k + y - x - 1) / (y - x);
                ckmin(d1, t);
                t -= d1;
                k += d1 * (y-x);
            }
            bool found[x]; rep(i, x) found[i] = false;
            while (t > 0){
                ll d = (k - r + y + x  - 1)/ x;
                ckmin(d, t);
                t -= d;
                k -= d * x;
                if (k < l) {cout << "No" << "\n"; return 0;}
                ll d2 = (r - y + 1 - k + y - x - 1)/ (y - x);
                ckmin(d2, t);
                t -= d2;
                k += d2 * (y - x);
                if (found[k % x]) {cout << "Yes" << "\n"; return 0;}
                found[k % x] = true;
            }
            cout << "Yes" << "\n";
        }
        return 0;
    }    
}