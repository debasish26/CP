#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<vector<long long>> v(n, vector<long long>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char temp;
            cin >> temp;
            if (temp == '.')
            {
                v[i][j] = 0;
            }
            else
            {
                v[i][j] = 1;
            }
        }
    }

    vector<vector<long long>> prefix(n, vector<long long>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            prefix[i][j] = v[i][j];
            if (j > 0)
                prefix[i][j] += prefix[i][j - 1];
            if (i > 0)
                prefix[i][j] += prefix[i - 1][j];
            if (i > 0 && j > 0)
                prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }

    while (q--)
    {
        long long l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        l1--, r1--, l2--, r2--; // convert to 0-based index

        long long ans = prefix[l2][r2];
        if (l1 > 0)
            ans -= prefix[l1 - 1][r2];
        if (r1 > 0)
            ans -= prefix[l2][r1 - 1];
        if (l1 > 0 && r1 > 0)
            ans += prefix[l1 - 1][r1 - 1];

        cout << ans << endl;
    }

    return 0;
}
