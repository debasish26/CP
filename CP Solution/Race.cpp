#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

void solve() {
    int a, x, y;
    cin >> a >> x >> y;

    for (int b = 1; b <= 100; ++b) {
        if (b == a) {
            continue;
        }
        if (abs(b - x) < abs(a - x) && abs(b - y) < abs(a - y)) {
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

    return 0;
}
