#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<pair<long long, long long>> hp_idx;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % k == 0)
            {
                hp_idx.push_back({k, -i}); // so that higher elem in first
            }
            else
            {
                hp_idx.push_back({arr[i] % k, -i});
            }
            // health between 1 to k now

        }
        sort(hp_idx.begin(), hp_idx.end());
        for (int i = n - 1; i >= 0; i--)
        {
            cout << abs(hp_idx[i].second) + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
