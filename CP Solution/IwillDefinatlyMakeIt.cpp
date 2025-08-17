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

    vector<int>a(n);
    for(auto &x:a){
        cin>>x;
    }

    int init = a[k-1];
    set<int>s;
    for(auto x: a){
        if(x>= init){
            s.insert(x);
        }
    }
    bool ans = true;
    int prev = init;
    for(auto &x : s){
        if(x-prev > init){
            ans = false;
        }
        prev = x;
    }
    if(ans){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
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