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
    int a , b;
    cin>>a>>b;

    ll ans = INT_MAX;
    for(int i =0;i<32;i++){
        ll ops = i;
        ll k = b + i;

        if(k==1){
            continue;
        }

        ll n = a;
        while(n > 0){
            n /= k;
            ops++;
        }
        ans = min(ans,ops);
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