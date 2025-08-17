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
    ll a, b, q;
    cin >> a >> b >> q;
    vector<ll> s(a + 2), t(b + 2);
    for (ll i = 1; i <= a; i++){
     cin >> s[i];
    }
    for (ll i = 1; i <= b; i++){
        cin >> t[i];
    }

    s[0] = -1e18;
    t[0] = -1e18;
    s[a+1] = 1e18;
    t[b+1] = 1e18;

    while (q--) {
        ll x;
        cin>>x;

        ll ans = LLONG_MAX;

        ll left_shrines = *(--upper_bound(s.begin(),s.end(),x));
        ll left_temple = *(--upper_bound(t.begin(),t.end() , x));

        ll right_shrines = *lower_bound(s.begin(),s.end(),x);
        ll right_temple = *(lower_bound(t.begin(),t.end(),x));

        ans = min(ans,x-min(left_shrines,left_temple));

        ans = min(ans,right_temple - left_shrines + min(x- left_shrines , right_temple - x));

        ans = min(ans,right_shrines - left_temple + min(right_shrines - x , x- left_temple));

        ans = min(ans,max(right_shrines,right_temple)-x);

        cout<<ans<<nl; 

    }
    
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