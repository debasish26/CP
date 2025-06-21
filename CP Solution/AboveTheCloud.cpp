#include <iostream>
#include <string>
#include<activecf.h>
#include <unordered_map>
using namespace std;

bool isValid(const string &s)
{
    int n = s.size();

    for (int i = 1; i < n - 1; ++i)
    {
        if (s[i] == s[0] || s[i] == s[n - 1])
        {
            return true;
        }
    }


    unordered_map<char, int> freq;
    for (int i = 1; i < n - 1; ++i)
    {
        freq[s[i]]++;
        if (freq[s[i]] >= 2)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (isValid(s))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
