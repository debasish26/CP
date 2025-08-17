#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        bool hasZero = false;
        bool adjacentZero = false;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                hasZero = true;
                if (i > 0 && a[i - 1] == 0)
                {
                    adjacentZero = true;
                }
            }
        }

        if (!hasZero || adjacentZero)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
