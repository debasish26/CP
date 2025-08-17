#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

int merge(vector<int> &a, int i, int j) {
    int mid = (i + j) / 2;
    int fi = i;
    int si = mid + 1;
    int ans = 0;
    vector<int> temp;

    while (fi <= mid && si <= j) {
        if (a[fi] <= a[si]) {
            temp.push_back(a[fi++]);
        } else {
            temp.push_back(a[si++]);
            ans += (mid - fi + 1);  // Fix: count of elements left in left half
        }
    }

    while (fi <= mid) temp.push_back(a[fi++]);
    while (si <= j) temp.push_back(a[si++]);

    for (int m = 0; m < temp.size(); m++) {
        a[i + m] = temp[m];
    }

    return ans;
}

int ms(vector<int> &a, int i, int j) {
    if (i >= j) return 0;

    int mid = (i + j) / 2;
    int ans = ms(a, i, mid);
    ans += ms(a, mid + 1, j);
    ans += merge(a, i, j);
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int o = 0; o < n; o++) {
        cin >> a[o];
    }

    int ans = ms(a, 0, n - 1);
    cout << ans << nl;

    // Optional: print sorted array
    for (int x : a) cout << x << " ";
    cout << nl;
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
