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
    int n , k;
    cin>>n>>k;

    vector<int> a(n);
    vector<int> b(n);

    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    for(int i =0;i<n;i++){
        cin>>b[i];
    }

    int maxx = 0;
    int sum = 0;
    int ans = 0;
    for(int i =0;i<min(n,k);i++){
        sum = sum + a[i];
        maxx = max(maxx , b[i]);
        ans = max(ans,sum+(k-1-i)*maxx);
    }

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


// for each step we have 2 options take ai or b1 (k-i-1) times and for a1 add it to a separate variable sum
// and compare it for that step if we take sum whichi is (a1 + a2 .. + ai) or take 
// max b till i (k-i-1) times till (min(n , k))