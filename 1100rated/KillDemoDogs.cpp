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

    ll ans = ((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
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

// observation 
/*
    its optimall to go to the points which are i*i and i*(i+1) value
    (diagonal and element just right to diagonal)

    cannot run o(n) as n is 1e9 per each test case and so need a better soln

    now we get that the ans is all the diagonal element till n
    + all the element  right side of all diagnoal points except n,n asthe right side 
    will be out of boundary so we can say need point right to diagonal till n-1

    now the formula will be

    summation of i*i till n from 1 + summation of i*(i+1) till n-1

    According to summation formula

    1. summation of i*i from 1 to n is [n*(n+1)(2n+1)]/6
    2. summation of n natural num is n*(n+1)/2

    3. Part of summation formula if we want summation of i*i till n-1 put n-1 in place of
    n in the 1st formula = [n*(n-1)(2n-1)]/6

    so final formula is 
        [n*(n+1)(2n+1)]/6 + [n*(n-1)(2n-1)]/6 + [n*(n+1)]/2 

    and simplifying both of them the formula will be

    n/6[(4n-1)(n+1)]

    now multiplying 2022 and cinsidering mod
    the final ans is 
    [(n*(4n-1)*(n+1))*337]%mod



*/