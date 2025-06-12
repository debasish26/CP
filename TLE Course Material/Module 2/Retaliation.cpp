#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

bool checkSolution(const vector<ll> &a, ll x, ll y, int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (x * i + y * (n - i + 1) != a[i - 1])
            return false;
    }
    return true;
}

bool canExplode(const vector<ll> &a, int n)
{
    if (n == 1)
        return true; // Always possible

    ll a1 = a[0];
    ll a2 = a[1];

    // From:
    // a1 = x * 1 + y * n
    // a2 = x * 2 + y * (n - 1)

    ll c1 = 1, d1 = n;
    ll c2 = 2, d2 = n - 1;

    ll det = c1 * d2 - c2 * d1; // = 1*(n-1) - 2*n = -n - 1

    if (det == 0)
        return false; // Singular system, no unique solution

    ll num_x = a1 * d2 - a2 * d1;
    ll num_y = a2 * c1 - a1 * c2;

    if (num_x % det != 0 || num_y % det != 0)
        return false;

    ll x = num_x / det;
    ll y = num_y / det;

    if (x < 0 || y < 0)
        return false;

    return checkSolution(a, x, y, n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << (canExplode(a, n) ? "YES" : "NO") << '\n';
    }

    return 0;
}
