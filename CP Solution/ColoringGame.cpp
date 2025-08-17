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
    
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long long total_ways = 0;

    if (n > 2) {
        int l = 0, r = n - 2;
        long long count1 = 0;
        while (l < r) {
            if (a[l] + a[r] > a[n - 1]) {
                count1 += (r - l);
                r--;
            } else {
                l++;
            }
        }
        total_ways += count1;
    }
    for (int k = n - 2; k >= 2; --k) {
        int l = 0, r = k - 1;
        long long count2 = 0;
        while (l < r) {
            if (a[l] + a[r] > a[k] && a[l] + a[r] + a[k] > a[n - 1]) {
                count2 += (r - l);
                r--;
            } else {
                l++;
            }
        }
        total_ways += count2;
    }

    cout << total_ways << '\n';
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