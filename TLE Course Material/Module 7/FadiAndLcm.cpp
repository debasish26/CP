#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

ll gcd(ll a, ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
void solve() {
    // Your logic here
    ll x;
    cin>>x;
    ll ans = 0;
    for(ll i =1;i*i<=x;i++){
        if(x % i == 0){
            if(lcm(i,x/i) == x){
                ans =i;
            }
        }
    }

    cout<<ans<<" "<< x/ans<<nl;
}

int main() {
    fast_io;

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}