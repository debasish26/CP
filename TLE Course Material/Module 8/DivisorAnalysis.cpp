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
    ll n;
    cin >> n;
    vector<ll> prime(n), power(n);

    for (int i = 0; i < n; i++) {
        cin >> prime[i] >> power[i];
    }


    // 1. Number of divisors
    ll ans1 = 1;
    for (int i = 0; i < n; i++) {
        ans1 = ans1 * (power[i] + 1) % mod;
    }

    // 2. Sum of divisors
    ll ans2 = 1;
    for (int i = 0; i < n; i++) {
        ll num = expo(prime[i], power[i] + 1) - 1;
        if (num < 0) num += mod; // handle negative mod
        ll deno = prime[i] - 1;
        ans2 = ans2 * mod_div(num, deno) % mod;
    }

    cout << ans1 << " " << ans2<<" ";

    //3. Product of divisors
    ll num =1 , pro = 1;
    for(int i =0;i<n;i++){
        pro = expo(pro,power[i] + 1);
        ll temp = (power[i] * (power[i]+1))/2;
        ll base = expo(prime[i],temp);
        ll val = expo(base,num);
        pro *= val;
        pro %= mod;
        num*=(power[i] + 1);
        num %= (mod-1);
    }
    cout<<pro<<nl;
}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
