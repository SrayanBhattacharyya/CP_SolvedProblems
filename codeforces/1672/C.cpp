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

vector <string> split(string s, string del = " "){            
    vs ans; ll start = 0; ll end = s.find(del);
    while (end != -1) {
        cout << s.substr(start, end - start) << endl;
        start = end + del.size(); 
        end = s.find(del, start);
    }
    ans.push_back(s.substr(start, end - start)); 
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> v;
        int prev;
        for(int i=0;i<n;i++)
        {
            int c=1;
            while(i+1<n && a[i]==a[i+1])
                i++,c++;
            if(c>1) v.push_back(c);
            if(v.size()==1 && c>1)
                prev=i;
        }
        if(v.size()==0) cout<<0<<endl;
        else if(v.size()==1)
        {
            if(v[0]==2) cout<<0<<endl;
            else if(v[0]==3) cout<<1<<endl;
            else cout<<v[0]-3<<endl;
        }
        else
        {
            int ans=v[0]-2;
            for(int i=prev+1;i<n;i++)
            {
                    int c=1;
                    while(i+1<n && a[i]==a[i+1])
                        i++,c++;
                    if(c>1)
                        ans += (i-prev), prev=i;
            }
            cout << ans-1 << "\n";
        }
    }
    return 0;
}