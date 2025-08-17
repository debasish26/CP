#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<pair<int, int>> v, int r, int c)
{
    for (auto x : v)
    {
        if (x.first != r && x.second != c)
            return false;
    }
    return true;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            ma = max(ma, a[i][j]);
        }
    }

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == ma)
            {
                v.push_back(make_pair(i, j));
            }
        }
    }

    if (v.size() == 1)
    {
        cout << ma - 1 << '\n';
        return;
    }

    if (v[0].first == v[1].first)
    {
        int r = v[0].first, c = -1;
        bool flag = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first != r)
            {
                if (c == -1)
                {
                    c = v[i].second;
                    continue;
                }
                else if (c != v[i].second)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << ma - 1 << '\n';
            return;
        }
    }

    if (v[0].second == v[1].second)
    {
        int c = v[0].second, r = -1;
        bool flag = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second != c)
            {
                if (r == -1)
                {
                    r = v[i].first;
                    continue;
                }
                else if (r != v[i].first)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << ma - 1 << '\n';
            return;
        }
    }

    if (check(v, v[0].first, v[1].second) || check(v, v[1].first, v[0].second))
    {
        cout << ma - 1 << '\n';
        return;
    }

    cout << ma << '\n';
}

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
