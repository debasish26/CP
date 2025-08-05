#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

bool helper(ll mid , ll n){
    if((mid*mid) <= n){
        return true;
    }else{
        return false;
    }
}

void solve() {
    // Your logic here
    ll n;
    cin>>n;

    auto helper = [&](ll mid) ->bool{
        if((mid * mid) <= n){
            return true;
        }else{
            return false;
        }
    };
    ll si = 1, ei = 1e9 , ans = -1;
    while(si<=ei){
        ll mid = si + (ei - si)/2;
        if(helper(mid)){
            ans = mid;
            si = mid + 1;
        }else{
            ei = mid -1;
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