#include <iostream>
using namespace std;

long long threen(long long n)
{
    if (n == 1)
    {
        return 0; // base case: 0 steps needed if n is already 1
    }

    if (n & 1)
    {
        return 1 + threen((3 * n) + 1);
    }
    else
    {
        return 1 + threen(n / 2);
    }
}

int main()
{
    long long n;
    cin >> n;
    long long ans = threen(n);
    cout << ans + 1 << endl;
    return 0;
}
