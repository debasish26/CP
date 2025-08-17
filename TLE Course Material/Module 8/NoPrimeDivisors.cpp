#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

// Binary exponentiation: (a^b) % mod
ll expo(ll a, ll b) {
    a %= mod;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// Modular division: (a / b) % mod
ll mod_div(ll a, ll b) {
    return (a * expo(b, mod - 2)) % mod; // Fermat's Little Theorem (mod must be prime)
}

void solve() {
    // Your logic here
    int n , m;
    cin>>n>>m;
    vector<vector<int>> ans(n,vector<int>(m));
    int cnt = 1;

    for(int i =1;i<n;i+=2){
        for(int j =0;j<m;j++){
            ans[i][j] = cnt;
            cnt++;
        }
    }
    for(int i =0;i<n;i+=2){
        for(int j =0;j<m;j++){
            ans[i][j] = cnt;
            cnt++;
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<nl;
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