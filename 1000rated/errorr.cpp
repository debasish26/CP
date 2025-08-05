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
    int mins = *min_element(a.begin() , a.end());
    int mini = INT_MAX;
    int sum = 0;
    int after = 0;
    if(a[0] > mins && a[1] > mins){
        a[0] = a[0] + mins;
        a[1] = 0;
        mins = *min_element(a.begin() , a.end());
    }
    for(int i =0;i<n;i++){
        if(a[i] == mins && after == 0){
            sum = sum + mins;
            after = 1;
            continue;
        }
        if(after == 0){
            sum = sum + min(mini,a[i]);
            mini = min(mini,a[i]);    
        }
    }
    if(a[n-1] == mins){
        cout<<sum<<nl;
        return;
    }
    cout<<sum + mins<<nl;


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