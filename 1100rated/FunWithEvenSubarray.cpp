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

    int ans = 0;
    int i = n-1;
    while(i>=0 && a[i] == a[n-1]){
        i--;
    }
    if(i == -1){
        cout<<0<<nl;
        return;
    }

    while(i>=0){
        i = i - (n-1-i);
        ans++;
        while(i>=0 && a[i]==a[n-1]){
            i--;
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