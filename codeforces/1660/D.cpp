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
typedef vector <pair<int,int>> vpii;
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
    while(t--){
      int n; cin >> n;
      int a[n];
      rep(i, n) cin >> a[i];
      vpii v;
      rep(i, n){
          if(a[i]==0) continue;
          int l=i;
          while(i<n && a[i]!=0)
            i++;
          v.push_back({l,i-1});
      }
      int ans=0,lr=-1,rr=-1;
      rep(i, v.size()){
          int l=v[i].first,r=v[i].second;
          int cnt=0,prod =1;
          for(int j=l;j<=r;j++)
            {
                if(a[j]<0) prod = prod * -1;
                if(abs(a[j])==2) cnt++;
            }
          if(prod > 0 && cnt>ans)
          {
              lr=l,rr=r;
              ans=cnt;
              continue;
          }
          if(prod >0) continue;
          int chk=0,idx;
          for(int j=l;j<=r;j++)
          {
              if(abs(a[j])==2) chk++;
              if(a[j]<0)
              {
                  idx=j;
                  break;
              }
          }
          int endchk=0,eidx;
          for(int j=r;j>=l;j--)
          {
              if(abs(a[j])==2) endchk++;
              if(a[j]<0)
              {
                  eidx=j;
                  break;
              }
          }
           int ans1=max(cnt-chk,cnt-endchk);
           if(ans1>ans)
           {
               ans=ans1;
               if(ans1==cnt-chk)
                 lr=idx+1,rr=r;
               else
                 lr=l,rr=eidx-1;
           }
      }
      if (lr==-1) cout << n << " " << 0 << "\n";
      else cout << lr << " " << n-1-rr << "\n";
    }
    return 0;
}