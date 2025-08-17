#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    ll pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n;i++){
        pre[i] = max(pre[i - 1], a[i]);
    }
    ll sum = 0;
    for (int i = n - 1; i >= 0;i--){
        cout << sum + pre[i] << ' ';
        sum += a[i];
    }
    cout << nl;
}

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
