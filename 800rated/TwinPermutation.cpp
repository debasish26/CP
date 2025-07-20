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
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i =0;i<n;i++) cin>>a[i];

    
    for(int i =0;i<n;i++){
        int ans = (n+1) - a[i];
        cout<<ans<<" ";
    }
    cout<<nl;
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
// means any value that satisifes a[i] + b[i] == a[i+1] + b[i+1]
// maximum sum can go upto 5
// so take (n + 1) - a[i];