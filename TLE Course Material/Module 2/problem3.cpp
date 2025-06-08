#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve()
{
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long f = 1;
    // f==0--> f is odd
    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
        {
            f = (!f);
        }
    }
    // if we start with odd number we end at the number same as parity of f
    if (x & 1)
    {
        if (!((f ^ y) & 1LL))
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    else
    {
        if (!((f ^ y) & 1LL))
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
}
int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
