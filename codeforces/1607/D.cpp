#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
#define mods 998244353
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <ll> vll;
#define max3(a,b,c) max(max((a),(b)),(c))
#define min3(a,b,c) min(min((a),(b)),(c))
#define input(a) rep(i,a.size()){ cin >> a[i];}
#define st(s) sort(s.begin(),s.end())
#define dst(s) sort(s.begin() , s.end() , greater<int>())
//Srayan Bhattacharyya JU EE

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t; 
    while (t--){
        int n; cin >> n; int a[n];
        rep(i, n) cin >> a[i];
        string s; cin >> s;
        vector<int> blue, red;
        rep(i, n){
            if(s[i] == 'B') blue.push_back(a[i]);
            else red.push_back(a[i]);
        }
        st(blue); dst(red);
        bool ok = true;
        rep(i, blue.size()){
            if(blue[i] < i + 1) ok = false;
        }
        rep(i, red.size()){
            if(red[i] > n - i) ok = false;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}