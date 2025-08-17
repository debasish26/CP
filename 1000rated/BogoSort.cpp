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

    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin() , a.end());
    for(int i = n-1 ;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<nl;
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

// 1 1 3 5
// 1 3 5 1
// 1 -2 3 2
// 5 3 1 1
// 1 2 3 4 5 6
// 0 1 2 3 4 5
// 3 2 1 5 6 4
// -3 -1 1 2 2 1
// 0 1 2 3 4 5 6
// 6 5 4 3 2 1 0 
// -6 =4 -2 0 2 4 


// 5 3 1 1
// -5 -2 1 2