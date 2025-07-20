#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES" << nl;
        cout << n << nl;
        for (int i = 0; i < n; ++i) cout << 1 << " ";
        cout << nl;
        return;
    }

    // x == 1
    if (k == 1) {
        cout << "NO" << nl;
        return;
    }

    if (k == 2) {
        if (n % 2 == 0) {
            cout << "YES" << nl;
            cout << n / 2 << nl;
            for (int i = 0; i < n / 2; ++i) cout << 2 << " ";
            cout << nl;
        } else {
            cout << "NO" << nl;
        }
        return;
    }

    // k >= 3
    if (n % 2 == 0) {
        cout << "YES" << nl;
        cout << n / 2 << nl;
        for (int i = 0; i < n / 2; ++i) cout << 2 << " ";
        cout << nl;
    } else {
        cout << "YES" << nl;
        cout << (n - 3) / 2 + 1 << nl;  // one 3 and the rest are 2s
        cout << 3 << " ";
        for (int i = 0; i < (n - 3) / 2; ++i) cout << 2 << " ";
        cout << nl;
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
