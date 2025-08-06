#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

bool check(vector<ll> &a ,ll mid , ll x){
    ll req = 0;
    ll n = a.size();
    for(ll i =0;i<n;i++){
        if(a[i] <=mid){
            req = req + (mid - a[i]);
        }
    }
    if(req<=x){
        return true;
    }

    return false;
}

void solve() {
    // Your logic here
    
    ll n , x;
    cin>>n>>x;

    vector<
    ll> a(n);
    for(
    ll i =0;i<n;i++){
        cin>>a[i];
    }

    
    ll si = 1 , ei = 1e12, ans = -1;
    while(si<=ei){
        ll mid = si + (ei - si)/2;
        if(check(a,mid,x)){
            ans = mid;
            si = mid + 1;
        } else{
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