#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll x = 1;

    // Move map declaration here to avoid state leakage
    map<ll, ll> ma;

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ll cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt++;
            }
            ma[i] = cnt;
            x = max(x, cnt);
        }
    }
    if (n != 1) {
        ma[n] = 1;
    }

    ll ans = 0;
    for (ll j = 1; j <= x; j++) {
        ll product = 1;
        for (auto& it : ma) {
            if (it.second > 0) {
                it.second--;
                product *= it.first;
            }
        }
        ans += product;
    }
    cout << ans << nl;
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
