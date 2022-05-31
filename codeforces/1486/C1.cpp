#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;

void init_code(){
    //fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int binarySearch(const int secondLargest, int low, int high){
    if(low == high)return low;
    // if searching in left region
    if(high < secondLargest){
        int mid = (low + high + 1) / 2;
        cout << "? " << mid << ' ' << secondLargest << endl;
        read(response);
        if(response == secondLargest)
          low = mid;
        else high = mid - 1;
    }

    // if searching in right region
    else{
        int mid = (low + high) / 2;
        cout << "? " << secondLargest << ' ' << mid << endl;
        read(response);
        if(response == secondLargest)
          high = mid;
        else low = mid + 1;
    }

    return binarySearch(secondLargest, low, high);
}

int main() {
   //init_code();
   int t = 1; //cin >> t;
   while(t--){
        read(n);

        cout << "? " << 1 << ' ' << n << endl;
        read(secondLargest);

        // assuming largest element is to the right of second largest element.
        bool maxIsLeft = 1;

        if(secondLargest == 1)maxIsLeft = 0;
        else{
            cout << "? " << 1 << ' ' << secondLargest << endl;
            read(response);
            if(response != secondLargest)
              maxIsLeft = 0;
        }

        int largest = -1;
        if(maxIsLeft)
          largest = binarySearch(secondLargest, 1, secondLargest - 1);
        else largest = binarySearch(secondLargest, secondLargest + 1, n);

        cout << "! " << largest << endl;
   }
   return 0;
}