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
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> freq;  

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    bool ans = false;
    for (auto &[val, count] : freq) {
        if (count >= 2) {
            ans = true;
            break;
        }
    }

    if(ans){
        cout<<"YES"<<nl;
    } else{
        cout<<"NO"<<nl;
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