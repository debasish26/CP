
#include <bits/stdc++.h>
using namespace std;
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
 
using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;
 
void solve() {
    // Your logic here
    int n;
    cin>>n;
    int x = n /2;
    int sum = x*(2*n-2 - (x-1)*2);
    int ans = sum / 2 +1;
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