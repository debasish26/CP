#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cnt1 += (a[i] == '0');
            cnt2 += (b[i] == '0');
        } else {
            cnt2 += (a[i] == '0');
            cnt1 += (b[i] == '0');
        }
    }

    if (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
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
