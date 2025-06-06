#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    vector<long long> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + x[i - 1];
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << pre[b] - pre[a - 1] << endl;
    }

    return 0;
}
