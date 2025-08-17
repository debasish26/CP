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
    for(ll i =0;i<n;i++){
        cin>>a[i];
    }

    ll odd_gcd = 0;
    ll even_gcd = 0;
    for(ll i = 0;i<n;i++){
        if(i%2==0){
            if(even_gcd == 0){
                even_gcd = a[i];
            }else{
                even_gcd = __gcd(even_gcd,a[i]);
            }
        } else{
            if(odd_gcd==0){
                odd_gcd = a[i];
            }else{
                odd_gcd = __gcd(odd_gcd,a[i]);
            }
        }
    }

    if(odd_gcd == even_gcd){
        cout<<0<<nl;
        return;
    }

    bool odd_valid = true;
    for (ll i = 0; i < n; i += 2) { 
        if (a[i] % odd_gcd == 0) {
            odd_valid = false;
            break;
        }
    }

    bool even_valid = true;
    for (ll i = 1; i < n; i += 2) { 
        if (a[i] % even_gcd == 0) {
            even_valid = false;
            break;
        }
    }

    if (odd_valid) {
        cout << odd_gcd << nl;
    } else if (even_valid) {
        cout << even_gcd << nl;
    } else {
        cout << 0 << nl;
    }

    
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