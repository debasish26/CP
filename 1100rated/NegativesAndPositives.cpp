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
    ll n;
    cin>>n;

    vector<ll> a(n);
    ll sum = 0;
    ll negs = 0;
    for(ll i =0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            negs++;
            a[i] = -a[i];
        }
        sum = sum + a[i];
    }

    sort(a.begin(),a.end());
    if(negs & 1){
        sum = sum - (2*a[0]);
    }
    cout<<sum<<nl;
    
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