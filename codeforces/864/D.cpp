//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 2e5 + 3;
 
ll cnt[N], passed[N], a[N];
queue <ll> q;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, ans; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i = 1; i <= n; i++) {
        if(!cnt[i]) q.push(i);
    }
    for(int i = 1; i <= n; i++){
        if(cnt[a[i]] == 1) continue;
        int fr = q.front();
        if(passed[a[i]]){
            cnt[a[i]]--;
            q.pop();
            a[i] = fr;
            ans++;
        }
        else{
            if (fr < a[i]) {
                cnt[a[i]]--;
                q.pop();
                a[i] = fr;
                ans++;
            }
            else passed[a[i]] = 1;
        }
    }
    cout << ans << '\n';
    for(int i = 1; i <= n; i++) cout << a[i] << ' ';
    return 0;
}