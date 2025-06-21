#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    // Your logic here
    int n,x;
    cin>>n>>x;

    if(n == 1){
        if(x == 0){
            cout<< -1<<nl;
            return;
        } else {
            cout<< x<<nl;
            return;
        }
    }
    int sb = __builtin_popcountll(x);
    if(sb > n){
        cout<<x<<nl;
        return;
    }
    int ans  = x + (n - sb);
    if((n-sb) % 2){
        if(x == 0 || x == 1){
            ans += 3;
        } else{
            ans++;
        }
    }
    cout<<ans<<nl;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
