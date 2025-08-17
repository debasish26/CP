#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    // Your logic here
    ll n ,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<ll , ll>> segments(n);
    for(int i =0;i<n;i++){
        segments[i] = {a[i] - x,a[i] + x};
    }
    ll ans = 0;
    ll l = segments[0].first;
    ll r = segments[0].second;
    for(int i = 1;i<n;i++){
        l = max(l , segments[i].first);
        r = min(r,segments[i].second);
        if(l>r){
            ans++;
            l = segments[i].first;
            r = segments[i].second;
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

    //solve();

    return 0;
}   