#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];  
    } 

    int a = x[0];       // a[0] = x[0] ^ y[0] and we choose y[0] = 0 to make it lex min
    y[0] = 0;

    for(int i = 1; i < n; i++) {
        int new_a = x[i] | a;     // ensure a[i] = x[i] ^ y[i] contains all bits of a[i-1]
        y[i] = x[i] ^ new_a;      // so y[i] = x[i] ^ a[i] = a[i-1] & ~x[i]
        a = new_a;
    }

    for(int i = 0; i < n; i++){
        cout << y[i] << " ";
    }
    cout << "\n";
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

/*
This means all 1-bits in a[i] must also be present in a[i+1].
We want to make y[i] as small as possible (lexicographically minimal), so we use the minimal necessary changes to x[i] to ensure growing condition.

1. Let a[0] = x[0] since we can choose y[0] = 0 ⇒ a[0] = x[0]
2. To ensure growing: a[i] must have all bits of a[i-1]
      -  a[i] = x[i] ^ y[i] must satisfy (a[i-1] & a[i]) == a[i-1]
      -  So we choose a[i] = x[i] | a[i-1]  (force all bits of a[i-1] into a[i])
3. Then: y[i] = x[i] ^ a[i] = a[i-1] & ~x[i] (only turn on the necessary bits to "add" a[i-1]'s bits into x[i])
4. This guarantees minimal y[i], and keeps the a-sequence growing

Bitwise intuition:
- If a[i-1] has a 1-bit that x[i] lacks, we must add that 1-bit via y[i]
- So y[i] = only those bits from a[i-1] that are missing in x[i]

Time complexity:
- O(n) per test case
- Total sum of n across all test cases ≤ 2e5 ⇒ fits within time limits

// a1 a2 a3 a4
// a1 = (x1 ^ y1)
// a2 = (x2 ^ y2)
// a1 & a2 = a1
// a[i-1] & a[i] = a[i];
// means all bits of a[i-1] should be set in a[i] to set all bits of a[i-1] in a[i] we can do something like new_a = a[i-1] | a[i];
// now need to find y[i] so 
// we know that a[i] = x[i] ^ y[i]
// so , y[i] = a[i] ^ x[i]
// now for a[0] take it as x[0] initially so that y will be 0
*/
