#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

void solve() {
    // Your logic here
    int n ;
    cin>>n;

    vector<int>a(n);
    int mins = 0;
    int sum = 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i] == -1){
            mins++;
        }
        sum = sum + a[i];
    }

    if(mins < (n - mins) && mins % 2 == 0){
        cout<<0<<nl;
        return;
    }else if(mins < (n-mins)){
        cout<<1<<nl;
        return;
    }
    int steps = 0;
    while(sum <0){
        mins--;
        sum = sum + 2;
        steps++;
    }
    if(mins % 2 == 0){
        cout<<steps<<nl;
    }else{
        cout<<steps + 1<<nl;
    }


}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}

// -1 -1 1 -1 = sum -2 , -1
// 1 -1 1 -1 = sum  0 , 1
//  sum = -2
// num of min = 3
// conv one min to plus 1 add to to the sum
// if i is - then add 2 else sub 2 and min is 2
// if num of min is even then mul is always greater than 1 and need to check sum
//  1 1 1 -1 -1 1 if num of min is less and its even then its good
// so need to check if num of min is less and its even
// -1 -1 -1 -1 -1 1 sum = -4
// then from last change one elem and add 2 to sum reduce min
// after all  
