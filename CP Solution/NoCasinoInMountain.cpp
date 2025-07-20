#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    int cnt = 0;
    for(int i =0;i<n;i++){
        if(a[i] == 0){
            cnt++;
        } else{
            cnt = 0;
        }
        if(cnt == k){
            ans++;
            cnt = 0;
            i++;
        }
    }

    cout << ans << nl;
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
