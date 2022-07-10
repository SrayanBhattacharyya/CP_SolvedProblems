#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mpa make_pair
#define endl '\n'

void solve(){
        ll n,a,b;
        cin >> n >> a >> b;
        vector <pair<ll,ll>> v(n),w(n);
        for(ll i=0;i<n;i++){
                cin >> v[i].first >> v[i].second;
                w[i].first = v[i].first-v[i].second;
                w[i].second = i;
        }
        sort(w.begin(),w.end());
        reverse(w.begin(),w.end());
        b = min(b,n);
        ll s = 0,rem = 0,ans = 0;
        for(ll i=0;i<n;i++){
                if(i<b){
                        s += max(v[w[i].second].first,v[w[i].second].second);
                }
                else{
                        rem += v[w[i].second].second;
                }
        }
        if(b == 0){
                cout << s+rem << endl;
                return;
        }
        for(ll i=0;i<n;i++){
                ll cur = s + rem;
                if(i<b){
                        cur -= max(v[w[i].second].first,v[w[i].second].second);
                        cur += max((1LL<<a)*(v[w[i].second].first),v[w[i].second].second);
                        ans = max(ans,cur);
                }
                else{
                        cur -= max(v[w[b-1].second].first,v[w[b-1].second].second);
                        cur += v[w[b-1].second].second;
                        cur -= v[w[i].second].second;
                        cur += max((1LL<<a)*(v[w[i].second].first),v[w[i].second].second);
                }
                ans = max(ans,cur);
        }
        cout << ans << endl;
}

int main(){
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
#endif
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int tc;
        tc = 1;
        //cin >> tc;
        for(int i=1;i<=tc;i++){
                //cout << "Case #" << i << ": ";
                solve();
        }
        return 0;
}