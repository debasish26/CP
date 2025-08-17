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

    int ans = 0;
    for(int i =0;i<n;i++){
        int b;
        cin>>b;
        a[i] = abs(b);
        if(a[i] == 0){
            ans = 1;
        }
    }

    if(ans == 1){
        cout<<0<<nl;
        return;
    }

    int mini = *min_element(a.begin(),a.end());

    cout<<mini<<nl;
}

int main() {
    fast_io;

    int t = 1;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}