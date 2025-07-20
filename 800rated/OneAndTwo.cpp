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
    int twos = 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i] == 2){
            twos++;
        }
    }

    if(twos == 0){
        cout<<1<<nl;
        return;
    }

    if(twos % 2 != 0){
        cout<<-1<<nl;
        return;
    }
    
    int steps = 0;
    int ans = 0;
    for(int i =0;i<n;i++){
        if(a[i] == 2){
            steps++;
        }
        if(steps == (twos / 2)){
            ans = i + 1;
            break;
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
