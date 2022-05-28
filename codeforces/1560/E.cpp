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
const ll MOD = 1e9 + 7; 
const ll MODS = 998244353; 
const ll NN = 1e7 + 10; 
const ll NS = 1e5 + 10;
const ll LLMAX = 1e18; 
const lld pi = 3.14159265358979323846;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll mod_mul(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a * b) % MOD) + MOD) % MOD;}
ll mods_mul(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a * b) % MODS) + MODS) % MODS;}
ll mod_add(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a + b) % MOD) + MOD) % MOD;}
ll mod_inv(ll i) {if (i == 1) return 1; return (MOD - ((MOD / i) * mod_inv(MOD % i)) % MOD) % MOD;}
ll mod_pwr(ll a, ll b) { if(b < 0) return 0; ll res = 1; while (b > 0) {if (b & 1) res = res * a % MOD; a = a * a % MOD; b >>= 1;} return res;}

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

ll n, a[1005];
void f(ll i) {
	if (a[i] > a[i + 1]) swap(a[i], a[i + 1]);
}
ll check() {
	rep_a(i, 1, n + 1) if (a[i] != i) return 0;
	return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    while (t--){
        string s;
		cin >> s;
		vector <bool> vis(1000);
		vector <char> order;
		ll cnt = 0;
		ll n = s.length();
		rev(i, n - 1){
			if(vis[s[i]])continue;
			vis[s[i]] = true;
			order.push_back(s[i]);
			cnt++;
		}
		vll good(n);
		bool f = true;
		ll totalgood = 0;
		rep(i, cnt){
			ll cntl = count(all(s), order[i]);
			ll freq = count(all(s), order[i])/(cnt-i);
			if(cntl%(cnt-i)!=0)f = false;
			ll cur = 0;
			ll val = 0;
			rep(j, n){
				if(s[j]==order[i]){
					good[j] = val;
					cur++;
				}
				if(cur==freq){
					val++;
					cur = 0;
				}
			}
			totalgood += freq;
		}
		string ss = s.substr(0,totalgood);
		vvll ind(26);
		vll curind(26);
		rep(i, ss.size()) ind[s[i]-'a'].emplace_back(i);
		ll cur = ss.size();
		reverse(all(order));
		rep(i, n - 1){
			if(good[i+1]>=good[i])continue;
			f = false;
		}
		rep(i, cnt){
			ll v = count(all(good), i);
			if(v != cur) f = false;
			cur -= count(all(ss),order[i]);
			rep(j, 26) curind[j] = 0;
			if(!f) break;
			vll ord;
			for(ll j = 0; j<n; j++){
				if(good[j]==i){
					if(curind[s[j] - 'a'] >= ind[s[j] - 'a'].size()){
						f = false;
						break;
					}
					ord.emplace_back(ind[s[j] - 'a'][curind[s[j] - 'a']]);
					curind[s[j]-'a']++;
				}
			}
			rep(i, ord.size() - 1){
				if(ord[i+1] >= ord[i]) continue;
				f = false;
			}
		}
		if(!f){
			cout << "-1\n";
			continue;
		}
		cout << s.substr(0,totalgood) << " ";
		for(char nxt: order) cout << nxt;
		cout << "\n";
    }    
    return 0;
}