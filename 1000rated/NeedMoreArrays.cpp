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
    set<int> b;

    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        b.emplace(x);
    }
    vector<int> a(b.begin() , b.end());
    int sz = a.size();

    for(int i =0;i<sz -1 ;i++){
        if(a[i+1] - a[i] == 1){
            a[i+1] = 0;
        }
    }
    int cnt = 0;
    for(int i =0;i<sz;i++){
        if(a[i] != 0){
            cnt = cnt + 1;
        }
    }
    cout<<cnt<<nl;
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