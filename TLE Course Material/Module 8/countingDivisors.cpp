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
    int cnt = 0;
    for(int i = 1;i*i<=n;i++){
        if(n % i == 0){
            if(i == n/i){
                cnt++;
            }else{
                cnt = cnt + 2;
            }
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