#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

void merge(vector<int> &a, int i, int j) {
    int mid = (i + j) / 2;
    int fi = i;
    int si = mid + 1;

    vector<int> temp;

    while (fi <= mid && si <= j) {
        if (a[fi] <= a[si]) {
            temp.push_back(a[fi++]);
        } else {
            temp.push_back(a[si++]);
        }
    }

    while (fi <= mid) {
        temp.push_back(a[fi++]);
    }

    while (si <= j) {
        temp.push_back(a[si++]);
    }

    for (int m = 0; m < j-i+1; m++) {
        a[i + m] = temp[m];
    }
}

void ms(vector<int> &a, int i, int j) {
    if (i >= j) return;

    int mid = (i + j) / 2;
    ms(a, i, mid);
    ms(a, mid + 1, j);
    merge(a, i, j);
}
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int o = 0; o < n; o++) {
        cin >> a[o];
    }
    ms(a, 0, n - 1);
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
