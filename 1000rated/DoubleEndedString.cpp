#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

int lcs(string A, string B) {
    long long n = A.size(), m = B.size();
    long long lcs = 0;

    for (long long len = 1; len <= min(n, m); len++) {
        for (long long i = 0; i + len <= n; i++) {
            for (long long j = 0; j + len <= m; j++) {
                string extract_A = A.substr(i, len);
                string extract_B = B.substr(j, len);

                if (extract_A == extract_B)
                    lcs = max(lcs, len);
            }
        }
    }

    return lcs;
}
void solve() {
    // Your logic here
    string a , b;
    cin>>a;
    cin>>b;

    int lc = lcs(a,b);

    int n = a.size();
    int m = b.size();

    int ans = (n + m) - (2*lc);

    cout<<ans<<nl;

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