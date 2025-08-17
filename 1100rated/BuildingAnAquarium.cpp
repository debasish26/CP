#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

ll check(ll mid, vector<ll> &a,ll x){
    ll units = 0;
    ll n = a.size();
    for(int i =0;i<n;i++){
        if(a[i]<mid){
            units = units + (mid - a[i]);
        }
    }
    if(x>=units){
        return 1;
    }else{
        return 0;
    }
}

void solve() {
    // Your logic here
    ll n , x;
    cin>>n>>x;

    vector<ll> a(n);
    for(ll i =0;i<n;i++){
        cin>>a[i];
    }

    ll low = 1;
    ll high = 1e12;
    ll ans =-1;
    while(low<=high){
        ll mid = (low + high) / 2;
        if(check(mid,a,x) == 1){
            ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
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
