#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, c;
    cin >> n >> c;

    vector<vector<long long int>> services(n);
    set<long long int> st;
    for (long long int i = 0; i < n; i++)
    {
        vector<long long int> temp(3, 0);
        cin >> temp[0] >> temp[1] >> temp[2];
        services[i] = temp;
        st.insert(temp[0]);
        st.insert(temp[1] + 1);
    }
    map<long long int, long long int> mp;
    long long int idx = 1;
    for (auto it : st)
    {
        mp[it] = idx;
        idx++;
    }
    vector<long long int> diff(idx, 0);
    for (long long int i = 0; i < n; i++)
    {
        long long int idx1, idx2, cost;
        idx1 = mp[services[i][0]];
        idx2 = mp[services[i][1] + 1];
        cost = services[i][2];
        diff[idx1] += cost;
        diff[idx2] -= cost;
    }

    long long int ans = 0;
    vector<long long int> unique_points(st.begin(), st.end());
    for (long long int i = 0; i < st.size() - 1; i++)
    {
        long long int span = unique_points[i + 1] - unique_points[i];
        ans += min(diff[i + 1], c) * span;
    }
    cout << ans << endl;

    return 0;
}
