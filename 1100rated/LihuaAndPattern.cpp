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
    int n,k;
    cin>>n>>k;

    vector<vector<int>>a(n,vector<int>(n));
    vector<vector<int>>res(n,vector<int>(n));
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>a[i][j];
            res[n-1-i][n-1-j] = a[i][j];
        }
    }
    
    int cnt = 0;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(a[i][j] != res[i][j]){
                cnt++;
            }
        }
    }
    cnt/=2;
    if(cnt<=k && ((k - cnt)%2 == 0 || n&1)){
        cout<<"YES"<<nl;
        return;
    }

    cout<<"NO"<<nl;
    
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