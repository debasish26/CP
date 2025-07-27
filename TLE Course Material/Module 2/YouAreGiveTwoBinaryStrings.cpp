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
    string x , y;
    cin>>x>>y;

    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());

    ll xpos = 0;
    ll ypos = 0;

    ll xsize = x.size();
    ll ysize = y.size();
    
    for(ll i =0;i<ysize;i++){
        if(y[i] == '1'){
            ypos = i;
            break;
        }
    }

    for(ll i = ypos;i<xsize;i++){
        if(x[i] == '1'){
            xpos = i;
            break;
        }
    }

    ll ans = xpos - ypos;

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