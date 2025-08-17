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
    string p, s;
    cin >> p >> s;

    vector<int> a;
    vector<char> ca; 
    int n1 = (int)p.size();
    int idx = 1;
    for (int i = 1; i < n1; i++) {
        if (p[i] == p[i - 1]) {
            idx++;
        } else {
            a.push_back(idx);
            ca.push_back(p[i - 1]);
            idx = 1;
        }
    }
    a.push_back(idx);
    ca.push_back(p.back());

    vector<int> b;
    vector<char> cb; 
    int n2 = (int)s.size();
    int idx1 = 1;
    for (int i = 1; i < n2; i++) {
        if (s[i] == s[i - 1]) {
            idx1++;
        } else {
            b.push_back(idx1);
            cb.push_back(s[i - 1]);
            idx1 = 1;
        }
    }
    b.push_back(idx1);
    cb.push_back(s.back());

    if (a.size() != b.size() || ca != cb) { 
        cout << "NO" << nl;
        return;
    }

    bool is_possible = true;
    for (int i = 0; i < (int)a.size(); i++) {
        if (b[i] < a[i] || b[i] > 2 * a[i]) {
            is_possible = false;
            break;
        }
    }

    cout << (is_possible ? "YES" : "NO") << nl;
    
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