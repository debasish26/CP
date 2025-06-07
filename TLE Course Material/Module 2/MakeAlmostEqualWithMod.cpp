#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (auto &it : v)
            cin >> it;
        for (int i = 1; i <= 61; i++)
        {
            long long num = (1LL << i);
            set<long long> st;
            for (int j = 0; j < n; j++)
            {
                st.insert(v[j] % num);
            }
            if (st.size() == 2)
            {
                cout << num << endl;
                break;
            }
        }
    }
    return 0;
}
