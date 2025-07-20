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

    int k , x;
    cin>>x>>k;

    int first = 0;
    int second = 0;

    if(x % k != 0){
        cout<<1<<nl;
        cout<<x<<nl;
        return;
    }

    for(int i = x-1;i>=1;i--){
        if((i % k) != 0 && (x-i) % k != 0){
            first = i;
            second= x - i;
            break;
        }
    }
    cout<<2<<nl;
    cout<<first<<" "<<second<<nl;   

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


// x k
// 10 2
// 1 2 3 4 5 6 7 8 9 10 ans is 2 - 9 andd 1
// i and x - i should not be divisbile by k
// find maimum i and x - i should not be divisible by k