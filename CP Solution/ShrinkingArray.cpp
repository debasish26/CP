#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    // Your logic here
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) <= 1) {
            cout << 0 << nl;
            return;
        }
    }
    if (n == 2) {
        cout << -1 << nl;
        return;
    }
    int min_ops = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int current_min = a[i];
        int current_max = a[i];

        for (int j = i + 1; j < n; ++j) {
            current_min = min(current_min, a[j]);
            current_max = max(current_max, a[j]);

            int k = j - i; 
            
            bool possible = false;

            if (i > 0) {
                if (current_max >= a[i - 1] - 1 && current_min <= a[i - 1] + 1) {
                    possible = true;
                }
            }
            if (j < n - 1) {
                if (current_max >= a[j + 1] - 1 && current_min <= a[j + 1] + 1) {
                    possible = true;
                }
            }

            if (possible) {
                min_ops = min(min_ops, k);
            }
        }
    }
    if (min_ops == INT_MAX) {
        cout << -1 << nl;
    } else {
        cout << min_ops << nl;
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