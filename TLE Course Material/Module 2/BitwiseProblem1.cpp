#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long d = (1LL << 36) + (1LL << 35) + n;
        long long c = (1LL << 35);
        long long b = (1LL << 36);
        long long a = (1LL << 36) + (1LL << 37);
        cout << a << " " << b << " " << c << " " << d << endl;
    }
    return 0;
}
