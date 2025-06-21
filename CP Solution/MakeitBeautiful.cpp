#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<pair<long long, long long>> s;
    for (long long i = 0; i < n; i++)
    {
        long long j = 0;
        while ((1LL << j) & a[i])
        {
            j++;
        }
        s.insert(make_pair(1LL << j, i));
    }

    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        ans += __builtin_popcountll(a[i]);
    }

    while (k > 0)
    {
        if (s.begin()->first <= k)
        {
            k -= s.begin()->first;
            a[s.begin()->second] |= s.begin()->first;
            ans++;

            long long idx = s.begin()->second;
            s.erase(s.begin());

            long long j = 0;
            while ((1LL << j) & a[idx])
            {
                j++;
            }
            s.insert(make_pair(1LL << j, idx));
        }
        else
        {
            break;
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;

    while (t--){
        solve();
    }
}
