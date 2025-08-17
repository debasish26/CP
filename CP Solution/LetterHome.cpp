#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int left = v[0];
        int right = v[n - 1];


        int option1 = abs(s - left) + (right - left);

        int option2 = abs(s - right) + (right - left);

        int ans = min(option1, option2);
        cout << ans << endl;
    }
    return 0;
}
