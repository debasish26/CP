#include <iostream>
#include <vector>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;

ll merge(vector<int> &a, int l, int r) {
    int mid = (l + r) / 2;
    int i = l, j = mid + 1;
    vector<int> temp;
    ll inv_count = 0;

    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i++]);
        } else {
            temp.push_back(a[j++]);
            inv_count += (mid - i + 1);
        }
    }

    while (i <= mid) temp.push_back(a[i++]);
    while (j <= r) temp.push_back(a[j++]);

    for (int k = 0; k < temp.size(); ++k) {
        a[l + k] = temp[k];
    }

    return inv_count;
}

ll merge_sort(vector<int> &a, int l, int r) {
    if (l >= r) return 0;
    int mid = (l + r) / 2;
    ll inv = merge_sort(a, l, mid);
    inv += merge_sort(a, mid + 1, r);
    inv += merge(a, l, r);
    return inv;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll ans = merge_sort(a, 0, n - 1);
    cout << ans << nl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    string blank;
    getline(cin, blank); // consume the newline after t

    while (t--) {
        solve();
        if (t) getline(cin, blank); // consume the blank line between test cases
    }

    return 0;
}
