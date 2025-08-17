#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;

void solve() {
    ll n, l, r, k;
    cin >> n >> l >> r >> k;

    // Case 1: If n is odd
    if (n % 2 == 1) {
        cout << l << nl;
        return;
    }

    // Case 2: If n == 2
    if (n == 2) {
        cout << -1 << nl;
        return;
    }

    // Case 3: Even n > 2
    ll res = -1;
    for (ll i = 1; i <= r; i <<= 1) {
        if (i >= l && (l & i) == 0) {
            res = i;
            break;
        }
    }

    if (res != -1) {
        // We found a valid x = res
        if (k <= n - 2) cout << l << nl;
        else cout << res << nl;
    } else {
        cout << -1 << nl;
    }
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
