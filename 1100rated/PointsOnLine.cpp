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
    int n ,d;
    cin>>n>>d;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ll ans = 0;
    for(int i=2;i<n;i++){
        ll idx = lower_bound(v.begin(),v.end(),v[i]-d)-v.begin();
        ll temp = i-idx;
        if(temp>=2){
            ans += (temp*(temp-1))/2;
        }
    }
    cout<<ans<<nl;
    
}

int main() {
    fast_io;

    int t = 1;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}