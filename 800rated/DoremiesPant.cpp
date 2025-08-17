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

    map<int, int> freq; 

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
    }

    if (freq.size() > 2) {
        cout << "No\n";
    } else if (freq.size() == 1) {
        // All numbers are same
        cout << "Yes\n";
    } else {
        // Exactly 2 different numbers
        auto it = freq.begin();
        int count1 = it->second;
        ++it;
        int count2 = it->second;

        if (abs(count1 - count2) <= 1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
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