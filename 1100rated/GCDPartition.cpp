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
    ll total_sum = 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        total_sum = total_sum + a[i];
    }

    ll sum = 0;
    ll ans = LLONG_MIN;
    for(int i = 0;i<n-1;i++){
        sum = sum + a[i];
        ans = max(ans,__gcd(sum,total_sum-sum));

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

    //solve();

    return 0;
}

// gcd (b1,b2,,b3...bn) <= gcd(b1+b2,b2+3....);
// so its optimal to divide the array into 2 parts as we can maximum spilit it into 2 parts
// after splitting into two parts the max of all is the ans