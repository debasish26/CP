#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    vector<long long> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    vector<long long> v2 = v1;
    sort(v2.begin(), v2.end());

    vector<long long> pre1(n + 1, 0);
    vector<long long> pre2(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        pre1[i] = pre1[i - 1] + v1[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        pre2[i] = pre2[i - 1] + v2[i - 1];
    }

    long long m;
    cin >> m;
    while (m--)
    {
        long long t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            cout << pre1[r] - pre1[l - 1] << endl;
        }
        else if (t == 2)
        {
            cout << pre2[r] - pre2[l - 1] << endl;
        }
    }

    return 0;
}
