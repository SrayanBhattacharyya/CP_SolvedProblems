//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ull t = 1; //cin >> t;
    while (t--){
        ull n, k, x;
        cin >> n >> k >> x;
        vector <ull> a(n);
        for (ull i = 0; i < n; i++) cin >> a[i];
        sort (a.begin(), a.end());
        priority_queue <ull, vector <ull>, greater <ull>> pq;
        for (ull i = 1; i < n; i++) {
            ull diff = a[i] - a[i - 1];
            if (diff > x) pq.push(diff);
        }
        while(!pq.empty()) {
            if (k <= 0) break;
            auto t = pq.top(); pq.pop();
            if (t - x > k * x) {
                pq.push(t);
                break;
            }
            else k  -= (t - 1) / x;
        } 
        cout << (ull)pq.size() + 1;
    }
    return 0;
}