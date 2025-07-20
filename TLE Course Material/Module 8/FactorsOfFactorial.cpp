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
    ll n;
    cin>>n;

    map<ll,ll> freqOfPrimes;

    for(ll num = 1;num<=n;num++){
        ll copyNum = num;
        while(copyNum % 2 == 0){
            freqOfPrimes[2] ++;
            copyNum /= 2;
        }

        for(ll i = 3;i*i <= copyNum;i+=2){
            while(copyNum % i == 0){
                freqOfPrimes[i] ++;
                copyNum /= i;
            }
        }

        if(copyNum > 2){
            freqOfPrimes[copyNum]++;
        }
    }
    ll divisors = 1;
    for(auto it: freqOfPrimes){
        divisors = (divisors % mod * (it.second + 1) % mod) % mod;
    }

    cout<<divisors<<nl;


}

int main() {
    fast_io;

    int t = 1;
    
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}