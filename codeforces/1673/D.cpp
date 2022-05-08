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
typedef set <int> si;
typedef vector <pii> vpii;
typedef vector <ll> vll;
#define st(s) sort(s.begin(),s.end())
#define dst(s) sort(s.begin() , s.end() , greater<int>())
#define all(s) s.begin(), s.end()
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define print(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout << *it << " "; cout << "\n";
const int MOD = 1e9 + 7; //For Max Int. Value
const int MODS = 998244353; //For smaller mod number
const int N = 1e7 + 10; //For usual mod number
const int LLMAX = 1e18; //For Max ll Value
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll mod_mul(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a * b) % MOD) + MOD) % MOD;}
ll mod_add(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a + b) % MOD) + MOD) % MOD;}
ll inv(ll i) {if (i == 1) return 1; return (MOD - ((MOD / i) * inv(MOD % i)) % MOD) % MOD;}
ll pwr(ll a, ll b) { ll res = 1; while (b > 0) {if (b & 1) res = res * a ; a = a * a; b >>= 1;} return res;}

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

vi findPrimeFactors(int n)
{
    vi primeFactors;
    while (n%2== 0) primeFactors.push_back(2), n = n/2;
    for (int i = 3; i*i <= n; i = i+2)
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

bool isPrime(int n)
{
    if(n==2 or n==3) return true;
    if(n%2==0) return false;
    for(ll i=3; i*i<=n; i+=2) if(n%i==0) return false;
    return true;
}

bool isValuePresent(long long val, long long start, long long diff, long long n)  {
    if(val>= start && ((val-start)%diff) == 0 && ((val-start)/diff) < n)    {
        return true;
    } else {
        return false;
    }
}

long long findValuesCount(long long n, long long d){
    return (n/d) - ((n%d) == 0);
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--){
        int b1, bd, bn;
        cin >> b1 >> bd >> bn;
        int c1, cd, cn;
        cin >> c1 >> cd >> cn;
        int cEnd = c1 + cd*(cn-1);
        if(!isValuePresent(c1, b1, bd, bn) || !isValuePresent(cEnd, b1, bd, bn) || (cd%bd) != 0)  {
            cout << "0\n";
            continue;
        }
        int cPrev = c1 - cd;
        int cNext = cEnd+cd;
        if(!isValuePresent(cPrev, b1, bd, bn) || !isValuePresent(cNext, b1, bd, bn))  {
            cout << "-1\n";
            continue;
        }
        int ans = 0;
        vi div = divisors(cd);
        for(auto ad : div)  {
            if((ad*bd) / gcd(ad, bd) < cd){
                continue;
            }
            ans += ((findValuesCount(c1 - cPrev, ad)+1) * (findValuesCount(cNext - cEnd, ad)+1)) % MOD;
            ans %= MOD;
        }
        cout << ans << "\n";
    }
    return 0;
}