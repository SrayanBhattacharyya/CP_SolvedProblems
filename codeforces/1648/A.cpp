#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define endl ("\n")
#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//oset<int>s:s.find_by_order(k):Kth element in "s",s.order_of_key(k):Number of item strictly lessthan k
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;

int32_t main(){
    fastio
    //cout<<setprecision(20)<<fixed ;
    int t=1;
    // cin>>t;
    while(t--){
        int n, m;cin>>n>>m;
        vector<vector<int>>v(n, vector<int>(m));
        map<int, vector<int>>x, y;
        rep(i, n){
            rep(j, m){
                cin>>v[i][j];
                // cout<<v[i][j]<<" ";
                x[v[i][j]].pb(i+1), y[v[i][j]].pb(j+1);
            }
        }
        int ans = 0;
        for(auto [a, b]:x){
            int n = b.size();
            int suf = 0, pre = 0;
            sort(all(b));
            for(int i = 0;i<n;i++){
                ans+=((b[i]*i) - pre);
                ans+=(suf - (b[i]*i));
                pre+=b[i];
                suf+=b[n-1-i];
                // cout<<sum<<" "<<ans<<endl;
            }
        }
        for(auto [a, b]:y){
            int n = b.size();
            int suf = 0, pre = 0;
            sort(all(b));
            for(int i = 0;i<n;i++){
                ans+=((b[i]*i) - pre);
                ans+=(suf - (b[i]*i));
                pre+=b[i];
                suf+=b[n-1-i];
                // cout<<sum<<" "<<ans<<endl;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}