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
    string s;
    cin >> s;
    int n = s.size();

    int cnt = count(s.begin(), s.end(), '1');

    if (cnt == n) {
        cout << (ll)n * n << nl;
        return;
    }

    if (cnt == 0) {
        cout << 0 << nl;
        return;
    }

    string t = s + s;
    int l_st = 0, steps = 0;
    for (char c : t) {
        if (c == '1') {
            steps++;
            l_st = max(l_st, steps);
        } else {
            steps = 0;
        }
    }

    if (l_st > n) {
        cout << (ll)n * n << nl;
        return;
    }

    ll a = (l_st + 1) / 2;
    ll b = (l_st + 2) / 2;
    cout << a * b << nl;
    
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