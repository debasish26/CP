#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int simulate_explosion(const vector<string> &grid, int x, int y, int k, int n, int m)
{
    int collected = 0;
    bool destroyed = false;

    for (int i = x - k; i <= x + k; ++i)
    {
        for (int j = y - k; j <= y + k; ++j)
        {
            if (i < 0 || j < 0 || i >= n || j >= m)
                continue;

            if (grid[i][j] == 'g')
            {
                int dx = abs(i - x);
                int dy = abs(j - y);
                int cheb = max(dx, dy);

                if (cheb < k)
                {
                    destroyed = true;
                }
                else if (cheb == k)
                {
                    collected++;
                }
            }
        }
    }

    if (destroyed)
        return 0; // Cannot collect if any gold is destroyed
    return collected;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        int max_gold = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == '.')
                {
                    int collected = simulate_explosion(grid, i, j, k, n, m);
                    max_gold = max(max_gold, collected);
                }
            }
        }

        cout << max_gold << '\n';
    }

    return 0;
}
