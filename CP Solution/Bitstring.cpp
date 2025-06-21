#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // Put all 1s at the beginning, rest 0s
        string result(k, '1');
        result += string(n - k, '0');

        cout << result << "\n";
    }

    return 0;
}
