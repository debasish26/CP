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

    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i != j){
                int res = __gcd(a[i] , a[j]);
                if(res <= 2){
                    cout<<"YES"<<nl;
                    return;
                }
            } else{
                continue;
            }
        }
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
