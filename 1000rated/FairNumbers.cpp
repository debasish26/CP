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
    ll n;
    cin>>n;
    ll final = 0;
    for(ll i = n; ;i++){
        ll c = i;
        bool ans = true;
        while(c>0){
            ll rem = c% 10;
            if(rem != 0 && i % rem != 0){
                ans = false;
                break;
            }
            c =c / 10;
        }
        if(ans){
            final = i;
            break;
        }
    }

    cout<<final<<nl;
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