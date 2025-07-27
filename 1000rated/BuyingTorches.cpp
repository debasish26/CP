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
    ll x , y , k;
    cin>>x>>y>>k;

    ll t = k*y + k - 1;
    ll one = x - 1;

    ll ans = (t + one -1) / one;

    cout<<ans + k<<nl;
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

/* 
    y stick to trade 1 coal

    need to make exactly k coal (to minimise the ops)

    k torch = k stick + k coal

    for k coal =
        y stick foe 1 coal
        y*k stick for k coal

    so to make total k torch need
    k torch = k stick + (y*k stick) -1 // stick needed as for 1 stick getting x -1 stick

    now steps required to geet this much stick
    at 1 step i can sell 1 stick to get x -1 stick

    1 step = 1 stick -----> x-1 stick

    so (k + (y*k) -1) / x-1 (lets call it n) is the required steps to gett total stick 

    from the total stick use use k stick to make coal

    so that k torch can be made

    so total steps ios n + k 

    
    [important take ceil value of division as to get 10 sticks and 1 stick gives 3 sticks need to 4 steps but 10/3 will give
    3 steps so use ceil operations which is (a+b-1/b)]
*/