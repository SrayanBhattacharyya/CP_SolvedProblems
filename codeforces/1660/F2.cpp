#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// zero-indexed Segment Tree
struct segTree {
 
    // default value for empty tree nodes
    static constexpr ll unit = 0;
 
    // (any associative function)
    ll merge(ll a, ll b) { return a+b; }
    
    vector<ll> t; ll n;
    segTree(ll n = 0, ll def = unit) : t(2*n, def), n(n) {}
    
    void update(ll pos, ll val) {
        for (t[pos += n] = val; pos /= 2;)
            t[pos] = merge(t[pos * 2], t[pos * 2 + 1]);
    }
 
    // queries [b,e)
    ll query(ll b, ll e) {
        ll ra = unit, rb = unit;
        for (b += n, e += n; b < e; b /= 2, e /= 2) {
            if (b % 2) ra = merge(ra, t[b++]);
            if (e % 2) rb = merge(t[--e], rb);
        }
        return merge(ra, rb);
    }
};
 
void add_one(segTree& T, ll idx){
    ll curr = T.query(idx,idx+1);
    T.update(idx,curr+1);
}
 
bool solve()
{
    ll n,ans=0;
    cin >> n;
    string s;
    cin >> s;
 
    ll maxn = 2*n+10;
    segTree rem0(maxn), rem1(maxn), rem2(maxn);
 
    if(n%3==0)
        add_one(rem0,n);
    else if(n%3==1)
        add_one(rem1,n);
    else
        add_one(rem2,n);
 
    ll pcnt = 0, mcnt = 0;
    for(ll i=0 ; i<n ; ++i)
    {
        if(s[i]=='+') pcnt++;
        else mcnt++;
        
        ll diff = n + mcnt - pcnt;
 
        ll curr_mod = diff%3;
 
        if(curr_mod == 0)
            ans += rem0.query(0,diff+1);
        else if(curr_mod==1)
            ans += rem1.query(0,diff+1);
        else
            ans += rem2.query(0,diff+1);
 
        if(curr_mod == 0)
            add_one(rem0, diff);
        else if(curr_mod == 1)
            add_one(rem1, diff);
        else 
            add_one(rem2,diff);
    }
 
    cout << ans << endl;
    
    return true;    
}
 
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin >> t;
    while(t--)
    {
        if(solve())
        {
            // cout << "YES" << endl;
        }
        else
        {
            // cout << "NO" << endl;
        }
    }
 
    return 0;
} 