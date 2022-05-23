
// Problem: C. Meximum a
// Contest: Codeforces - SlavicGHegdahlDiv1Div2TestingMashup
// URL: https://codeforces.com/gym/356879/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

//YouTube Channel: https://www.youtube.com/c/NamanBansal
//Discord Link: http://bit.ly/namanbansal013

#include <iostream>
#include <iosfwd>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <cctype>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <math.h>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
#pragma GCC optimize ("-O3")
#define ll long long
#define lld long double
using namespace std;
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
#define dst(s) sort(s.begin() , s.end() , greater<ll>())
#define all(s) s.begin(), s.end()
#define yes cout << "YES" << "\n"
#define no cout << "NO" << "\n"
#define prll(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout << *it << " "; cout << "\n";
const ll MOD = 1e9 + 7; 
const ll MODS = 998244353; 
const ll NN = 1e7 + 10; 
const ll NS = 1e5 + 10;
const ll LLMAX = 1e18; 
const lld pi = 3.14159265358979323846;

bool isPalindrome(string S){
    string P = S;
    reverse(all(P));
    if (S == P) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--)	{
    	ll n;
    	cin >> n;
    	ll grid[n + 2][n + 2];
    	rep(i, n + 2) rep(j, n + 2) grid[i][j] = 0;
    	ll ans = 0;
    	ll x;
    	rep_a(i, 1, n + 1){
    		rep_a(j, 1, n + 1){
    			cin >> x;
    			if(!grid[i][j - 1] && !grid[i][j + 1] && !grid[i - 1][j] && !grid[i + 1][j]){
    				ans ^= x;
    				grid[i - 1][j]++;
    				grid[i + 1][j]++;
    				grid[i][j - 1]++;
    				grid[i][j + 1]++;
    			}
    		}
    	}
    	cout << ans << "\n";
    }
    return 0;
}
