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
    cin>>n;

    vector<int> a(n) , b(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        cin>>b[i];
    }

    int l = 0, r = n-1;
    while(l<=n && a[l] == b[l]){
        l++;
    }
    while(r>=0 && a[r] == b[r]){
        r--;
    }

    while(l>0 && b[l-1]<=b[l]){
        l--;
    }
    while(r+1<n && b[r]<=b[r+1]){
        r++;
    }

    cout<<l+1<<" "<<r+1<<nl;
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
// Step 1: Find first mismatch (l) and last mismatch (r
// Step 2: Expand l to the left if possible
// Step 3: Expand r to the right if possible
// Output in 1-based indexing

// 2 2 1
// 2 1 2

// 1 2 1
// 1 1 2 