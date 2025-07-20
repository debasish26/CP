#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;

void solve() {
    ll n;
    cin >> n;

    vector<ll> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<ll> a;
    a.push_back(b[0]);

    for (int i = 1; i < n; i++) {
        if (b[i] >= b[i - 1]) {
            a.push_back(b[i]);
        } else {
            ll m = min(b[i] , b[i-1]);
            a.push_back(m);
            a.push_back(b[i]);
        }
    }

    cout << a.size() << nl;
    for (ll val : a) {
        cout << val << " ";
    }
    cout << nl;
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