#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int sum =0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i]; 
    }

    sort(a.begin(), a.end());
    a[n - 1]--; 
    sort(a.begin(), a.end()); 

    if (a[n - 1] - a[0] > k || sum % 2 == 0) {
        cout << "Jerry" << nl;
    } else {
        cout << "Tom" << nl;
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

