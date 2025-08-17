#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        bool ok = false;
        for (int x = 0; x < 2; ++x) {
            ll rem = n - x * k;
            if (rem >= 0 && rem % 2 == 0) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << nl;
    }

    return 0;
}
