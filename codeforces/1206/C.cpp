//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[(ll)5e5];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
	if(n % 2 == 0){
        cout << "NO" << "\n";
        return 0;
    }
    cout << "YES" << "\n";
    int x = 1, y = n + 1;
    for(int i = 1; i <= n; i++){
        if(i % 2){
            a[x] = 2 * i - 1;
            a[y] = 2 * i;
        }
        else{
            a[y] = 2 * i - 1;
            a[x] = 2 * i;
        }
        x--;
        y--;
        if(x == 0) x = 2 * n;
    }
    for(int i = 1; i <= 2 * n; i++) cout << a[i] << " ";
	return 0;
}