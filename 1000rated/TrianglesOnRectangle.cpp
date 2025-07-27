#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;

void solve() {
    int w, h;
    cin >> w >> h;

    vi x1, x2, y1, y2;

    for (int u = 4; u >= 1; --u) {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            int val;
            cin >> val;
            if (u == 4) x1.push_back(val);     // bottom: y = 0
            else if (u == 3) x2.push_back(val); // top:    y = h
            else if (u == 2) y1.push_back(val); // left:   x = 0
            else if (u == 1) y2.push_back(val); // right:  x = w
        }
    }

    // max base from each side
    int max1 = *max_element(x1.begin(), x1.end()) - *min_element(x1.begin(), x1.end());
    int max2 = *max_element(x2.begin(), x2.end()) - *min_element(x2.begin(), x2.end());
    int max3 = *max_element(y1.begin(), y1.end()) - *min_element(y1.begin(), y1.end());
    int max4 = *max_element(y2.begin(), y2.end()) - *min_element(y2.begin(), y2.end());

    // Area = base * height
    ll area1 = 1LL * max1 * h;
    ll area2 = 1LL * max2 * h;
    ll area3 = 1LL * max3 * w;
    ll area4 = 1LL * max4 * w;

    ll max_area = max({area1, area2, area3, area4});

    cout << max_area << nl;
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
