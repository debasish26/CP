#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

// Binary exponentiation: (a^b) % mod
ll expo(ll a, ll b) {
    a %= mod;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// Modular division: (a / b) % mod
ll mod_div(ll a, ll b) {
    return (a * expo(b, mod - 2)) % mod; // Fermat's Little Theorem (mod must be prime)
}

void solve() {
    // Your logic here
    ll p , q;
    cin>>p>>q;
    vector<ll> prime;
    ll nq = q;
    for(int i = 2;i*i<=q;i++){
        if(nq % i==0){
            prime.push_back(i);
            while(nq%i==0){
                nq /= i;
            }
        }
    }
    if(nq>1){
        prime.push_back(nq);
    }
    ll ans = p;
    for(auto it: prime){
        ll power_p = 0,power_q = 0;

        nq = q;
        ll np = p;
        while(np%it==0){
            power_p++;
            np /=it;
        }

        while(nq%it==0){
            power_q++;
            nq /= it;
        }

        ll drop = power_p - power_q + 1;
        ll val = 1;
        for(int i =0;i<drop;i++){
            val*=it;
        }
        ans = min(ans , val);

    }
    cout<<(p/ans)<<nl;


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