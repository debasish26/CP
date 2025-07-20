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
    bool is_sorted = true;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    int min_dist = INT_MAX;
    for(int i =1;i<n;i++){
        if(a[i] < a[i-1]){
            is_sorted = false;
        }
        min_dist = min((a[i] - a[i-1]) , min_dist);
    }

    if(!is_sorted){
        cout<<0<<nl;
        return;
    }

    int res = min_dist / 2;

    cout<<res + 1<<nl;

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