#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    int n;
    cin>>n;

    vi arr(n);
    int cnt =0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =1;i<n;i++){
        if(abs(arr[i]) < abs(arr[0])){
            cnt++;
        }
    }
    if(cnt <= n/2){
        cout<<"YES"<<nl;
    } else {
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

    return 0;
}
