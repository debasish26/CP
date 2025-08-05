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
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a > b) {
        if (a % 2 == 1 && a - 1 == b) {
            cout << y <<nl;
        } else {
            cout << -1 <<nl;
        }
        return;
    }

    int total = b - a;
    int odd = 0;
    for (int i = a; i < b; ++i) {
        if (i % 2 == 1) {
            odd++;
        }
    }

    ll cost = 0;
    if (y > x) {
        cost = total * x;
    } else {
        cost = (total - odd)*y + (odd)*x;
    }

    cout << cost <<nl;
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