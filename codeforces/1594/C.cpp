#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n;i>=0;i--)
#define rep_a(i,a,n) for(int i=a;i<n;i++)
#define mod 1000000007
typedef long long ll;
//Srayan Bhattacharyya JU EE

int main()
{
    int t; cin >> t;
    while (t--){
        int n; char c; cin >> n >> c; 
        string s; cin >> s;
        int cnt = 0, d = 0;
        if (count(s.begin(), s.end(), c) == n) cout << 0 << "\n";
        else{
            for(int i = 2; i <= n; i++){
                cnt = 0;
                if (s[i - 1] == c){
                    for(int j = i; j <= n; j += i){
                        if (s[j - 1] != c){
                            cnt++; break;
                        }
                    }
                    if (cnt == 0){
                        cout << 1 << "\n" << i << "\n";
                        d++;
                        break;
                    }
                }
            }
            if (d == 0){
                cout << 2 << "\n";
                cout << n-1 << " " << n << "\n";
            }
        }
    }
    return 0;
}

