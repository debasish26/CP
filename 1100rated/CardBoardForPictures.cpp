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
    ll n , c;
    cin>>n>>c;

    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll low = 1;
    ll high = 1e9;
    ll k = -1;
    while(low<=high){
        ll mid = (low + high)/2;
        ll final = 0;

        for(ll i =0;i<n;i++){
            ll ans = ((2*mid)+a[i]) * ((2*mid)+a[i]);
            final = final + ans;
            if(final > c){
                break;
            }
        }
        if(final<=c){
            k = mid;
            low = mid +1;
        }else{
            high = mid -1;
        }


    }

    cout<<k<<nl; 
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