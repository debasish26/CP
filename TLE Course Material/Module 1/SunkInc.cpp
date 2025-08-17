#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

const int n = 1e6 + 1;
long long diff[n];

int main()
{
    long long N, C;
    cin >> N >> C;

    vector<long long> start(N), end(N), cost(N);
    long long max_day = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> start[i] >> end[i] >> cost[i];
        max_day = max(max_day, end[i]);
    }

    memset(diff, 0, sizeof(diff));
    for (int i = 0; i < N; i++)
    {
        diff[start[i]] += cost[i];
        diff[end[i] + 1] -= cost[i];
    }

    for (int i = 1; i <= max_day; i++)
    {
        diff[i] += diff[i - 1];
    }

    long long ans = 0;
    for (int i = 1; i <= max_day; i++)
    {
        ans += min(diff[i], C);
    }

    cout << ans << endl;
    return 0;
}
