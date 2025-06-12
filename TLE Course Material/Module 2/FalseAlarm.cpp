#include <iostream>
#include <vector>
using namespace std;

bool canPassAllDoors(int n, int x, const vector<int> &a)
{
    for (int start = 0; start <= n - x; ++start)
    {
        bool possible = true;
        // Check before button press
        for (int i = 0; i < start; ++i)
        {
            if (a[i] == 1)
            {
                possible = false;
                break;
            }
        }
        // After button effect ends
        for (int i = start + x; i < n && possible; ++i)
        {
            if (a[i] == 1)
            {
                possible = false;
                break;
            }
        }
        if (possible)
            return true;
    }

    // Extra case: Use button at the start
    if (x >= n)
        return true;

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        if (canPassAllDoors(n, x, a))
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
