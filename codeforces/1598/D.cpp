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

// vll divisors(ll n){
//     vll v;
//     for (ll i = 1; i <= sqrt(n); i++){
//         if (n % i == 0){
//             v.emplace_back(i);
//             if ((n / i) != i) v.emplace_back(n / i);
//         }
//     }
//     return v;
// }

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

ll get(map <ll, vector <pair<ll,ll>> > mp,ll n){
        ll cnt = 0,res = 0;
        for(auto x : mp){
                res += (ll)x.second.size()*(cnt*(n-(ll)x.second.size()-cnt));
                cnt += (ll)x.second.size();
        }
        return res;
}
 
void solve(){
        ll n;
        cin >> n;
        map <ll, vpll> mp,mpp;
        vpll v;
        vll ans1(n,0),ans2(n,0);
        rep(i, n){
            ll a,b;
            cin >> a >> b;
            v.push_back(make_pair(a,b));
            mp[a].push_back(make_pair(b,i));
            mpp[b].push_back(make_pair(a,i));
        }
        map <ll,ll> cnt1;
        ll s = 0;
        for(auto x : mp){
            for(auto y : x.second) ans1[y.second] = s-cnt1[y.first];
            for(auto y : x.second){
                cnt1[y.first]++;
                s++;
            }
        }
        map <ll,ll> cnt2;
        s = 0;
        for(auto it = mp.rbegin();it!=mp.rend();++it){
            for(auto y : it->second)  ans1[y.second] *= (s-cnt2[y.first]);
            for(auto y : it->second){
                cnt2[y.first]++;
                s++;
            }
        }
        s = 0;
        cnt1.clear();
        for(auto x : mp){
            for(auto y : x.second){
                s -= cnt1[y.first];
                cnt2[y.first]--;
            }
            for(auto y : x.second) ans2[y.second] = s-(cnt1[y.first]*cnt2[y.first]);
            for(auto y : x.second){
                s += cnt2[y.first];
                cnt1[y.first]++;
            }
        }
        ll ans = 0;
        rep(i, n) ans += ans1[i]-ans2[i];
        ll ok1 = get(mp,n);
        ll ok2 = get(mpp,n);
        cout << ok1+ok2-ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        solve();
    }    
    return 0;
}