//Srayan Bhattachrayya JU EE
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, ta, b, tb;
    cin >> a >> ta >> b >> tb;
    int hr, mn;
    scanf("%d:%d",&hr,&mn);
    int str = hr * 60 + mn;
    int en = str + ta;
    int cur = 5*60;
    int cnt = 0;
    while(cur <= 1439){
        if (cur + tb > str && cur < en){
            cnt++;
        }
        cur += b;
    }
    cout << cnt << "\n";
    return 0;
}