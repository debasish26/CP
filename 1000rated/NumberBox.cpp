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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    int totalAbs = 0;
    int negCount = 0;
    int minAbs = 1e9;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            totalAbs += abs(a[i][j]);
            if (a[i][j] < 0) negCount++;
            minAbs = min(minAbs, abs(a[i][j]));
        }
    }

    if (negCount % 2 == 0) {
        cout << totalAbs << '\n';
    } else {
        cout << totalAbs - 2 * minAbs << '\n';
    }
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