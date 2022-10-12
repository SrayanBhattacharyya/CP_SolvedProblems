#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, m;
long long a[300005];
int M = 262144;
long long st[1000005];
int idm;
void build_seg(int id, int l, int r){
    if(l == r){
        st[id] = l;
        return;
    }
    int mid = (l + r)/2;
    build_seg(2 * id, l, mid);
    build_seg(2 * id + 1, mid + 1, r);
    st[id] += st[id * 2] + st[id * 2 + 1];
}

void get_idm(int id, int r, int v){
    if(r == v){
        idm = id;
        return;
    }
    get_idm(id * 2, r/2, v);
}
long long ans;
int f;

void solve(int id, int l, int r, int u, int v){
    if(l == r || f == 1) return;
    int mid1 = (l + r)/2;
    int mid2 = (u + v)/2;

    ll su = a[mid2] - a[u - 1], sv = a[v] - a[mid2];

    if(su == st[id * 2] && sv == st[id * 2 + 1]){
        solve(id * 2, l, mid1, u, mid2);
        solve(id * 2 + 1, mid1 + 1, r, mid2 + 1, v);
    }
    else{
        if(sv == st[id * 2] && su == st[id * 2 + 1]){
            ans++;
            solve(id * 2, l, mid1, mid2 + 1, v);
            solve(id * 2 + 1, mid1 + 1, r, u, mid2);
        }
        else{
            f = 1;
            return;
        }
    }
}

int main(){
    build_seg(1, 1, M);
    cin >> t;
    while(t--){
        f = 0;
        ans = 0;
        cin >> m;
        for(int i = 1; i <= m; i++){
            cin >> a[i];
            a[i] += a[i - 1];
        }
        get_idm(1, M, m);
        solve(idm, 1, m, 1, m);
        if(f) cout << -1;
        else cout << ans;
        cout << '\n';
    }
}
