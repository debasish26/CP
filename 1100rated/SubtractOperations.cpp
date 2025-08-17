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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<ll , ll>freq; 
    for (ll x : a) {
        freq[x] = 1;
    }

    for (ll x : a) {
        ll res = x - k;
        if (freq.find(res) != freq.end()) {
            cout << "YES" << nl;
            return;
        }
    }

    cout << "NO" << nl;
    
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