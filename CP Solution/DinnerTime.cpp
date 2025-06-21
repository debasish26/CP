#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    int n, m, p, q;
        cin >> n >> m >> p >> q;
        if(n % p == 0 && (n /p)*q !=m){
            cout<<"NO"<<nl;
        } else {
            cout<<"YES"<<nl;
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
