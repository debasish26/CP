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
        pii arr[n + 1];
        for(int i = 1; i <= n; i++) cin >> arr[i].first, arr[i].second = i;
        sort(arr + 1, arr + n + 1);
        int nxt[n + 1];
        ll sum[n + 1];
        int ans[n + 1];
        nxt[0] = sum[0] = 0;
        for(int i = 1; i <= n; i++){
            if(nxt[i - 1] >= i){
                nxt[i] = nxt[i - 1];
                sum[i] = sum[i - 1];
            } else {
                sum[i] = sum[i - 1] + arr[i].first;
                nxt[i] = i;
                while(nxt[i] + 1 <= n && sum[i] >= arr[nxt[i] + 1].first){
                    nxt[i]++;
                    sum[i] += arr[nxt[i]].first;
                }
            }
            ans[arr[i].second] = nxt[i];
        }
        for(int i = 1; i <= n; i++) cout << ans[i] - 1 << " ";
        cout << endl;
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


// 20 5 1 4 2
// for 20 ans is 4
// 5 - 20 1 4 2
// 6 20 4 2
// 10 20 2
// 12 20

// for max elem can remove all elem less than it
// for second last elem calculate sum of all elem less than eqal to the sum
// and check if its greater than max then yes
// 

// 20 5 1 4 2
// 4  3 0 3 1
/// a1 a2 a3 a4 a5 (if sorted)
//  0 1   2   3  4

// 1 2 4 5 20
// 1 3 11