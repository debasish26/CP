#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> pref(n);
    pref[0] = a[0];
    for (ll i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }

    ll final = LLONG_MIN;
    for (ll k = 1; k <= n; k++) {
        if (n % k == 0) {
            ll mini = LLONG_MAX;
            ll maxi = LLONG_MIN;
            for (ll i = 0; i < n; i += k) {
                ll sum;
                if (i == 0) {
                    sum = pref[i + k - 1];
                } else {
                    sum = pref[i + k - 1] - pref[i - 1];
                }
                mini = min(mini, sum);
                maxi = max(maxi, sum);
            }
            final = max(final, maxi - mini);
        }
    }
    cout << final << nl;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// calculate prefix sum and try difference array to taking all possible subsets sum and
// find max and min value from there and then calculate ans as the max - min value
// then after getting the diff for that combination check for all combination and store the max
// combination at final and out put it
// 10 2 3 6 1 3
// 10 12 15 21 22 25
// for n = 6
// loop from 1 to 6 and find all k which will divide n
// now for all k group them
// i = 1// groutps are 10 2 3 6 1 3
// among them max is 10 and min is 1
// ans = max - min = 10 - 9 = 1
// final = max(final , ans);
// loop same for 2 and 3 and 6 ND 12
// final = maximum value among there difference will be the ans

