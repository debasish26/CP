#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    int len = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] % 2 == a[i - 1] % 2) {
            len++;
        } else {
            ans += (len - 1); // need (len - 1) operations to collapse
            len = 1; // start new group
        }
    }

    ans += (len - 1); // add last group ops

    cout << ans << nl;
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