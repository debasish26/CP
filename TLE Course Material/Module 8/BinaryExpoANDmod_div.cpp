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