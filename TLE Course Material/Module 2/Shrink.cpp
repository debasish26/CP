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

        vector<int> result(n);

        if (n == 3)
        {
            result = {1, 3, 2};
        }
        else
        {
            // Pattern: [2, 3, n, 4, 5, ..., n-1, 1]
            // This creates cascading peaks that can be removed sequentially

            result[0] = 2;
            result[1] = 3;
            result[2] = n; // Largest number creates first removable peak

            // Fill positions 3 to n-2 with numbers 4 to n-1
            for (int i = 3; i < n - 1; i++)
            {
                result[i] = i + 1;
            }

            result[n - 1] = 1; // Smallest at the end
        }

        for (int x : result)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
