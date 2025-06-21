#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

    
        long long ans = 0;


        long long temp1 = k, count1 = 0;
        if (temp1 >= a)
        {
            count1 = (temp1 - a) / x + 1;
            temp1 -= count1 * x;
        }
        if (temp1 >= b)
        {
            count1 += (temp1 - b) / y + 1;
        }

        long long temp2 = k, count2 = 0;
        if (temp2 >= b)
        {
            count2 = (temp2 - b) / y + 1;
            temp2 -= count2 * y;
        }
        if (temp2 >= a)
        {
            count2 += (temp2 - a) / x + 1;
        }

        cout << max(count1, count2) << '\n';
    }
    return 0;
}
