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
    int n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    // Prefix sum array
    vector<ll> pr(n + 1, 0);
    for (int i = 0; i < n; ++i)
        pr[i + 1] = pr[i] + a[i];

    ll ans = 0;
    for (int i = 0; i <= k; ++i) {
        int left = 2 * i;
        int right = n - (k - i);
        if (left <= right) {
            ans = max(ans, pr[right] - pr[left]);
        }
    }

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