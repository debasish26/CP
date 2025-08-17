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

    vector<int> p(n);
    for(int i =0;i<n;i++){
        cin>>p[i];
    }

    vector<int> temp = p;
    sort(temp.begin(),temp.end());

    int ans = -1;
    for(int i =0;i<n;i++){
        if(temp[i] != p[i]){
            ans = (ans&p[i]);
        }
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