#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long w, h, a, b;
        cin >> w >> h >> a >> b;

        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        bool can_tile = false;

        if ((x1 - x2) % a == 0 && (y1 - y2) % b == 0)
            can_tile = true;

        cout << (can_tile ? "Yes" : "No") << endl;
    }

    return 0;
}
