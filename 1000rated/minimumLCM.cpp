#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans3 = 1;
        long long ans4 = n - 1;
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans3 = n / i;
                ans4 = n - ans3;
                break;
            }
        }
        cout << ans3 << " " << ans4 << endl;
    }
    return 0;
}

// for even its simply n/2 but  for odd its the highest divisor ad n - highest divisor
