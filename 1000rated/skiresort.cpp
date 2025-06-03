#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= q)
            {
                cnt++;
            }
            else
            {
                if (cnt >= k)
                {
                    ans += (cnt - k + 1LL) * (cnt - k + 2LL) / 2;
                }
                cnt = 0;
            }
        }

        // Check for the last segment
        if (cnt >= k)
        {
            ans += (cnt - k + 1LL) * (cnt - k + 2LL) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}
