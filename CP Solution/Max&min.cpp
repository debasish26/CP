#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int mn = min({A, B, C});
    int mx = max({A, B, C});

    cout << mn << " " << mx << endl;
}
