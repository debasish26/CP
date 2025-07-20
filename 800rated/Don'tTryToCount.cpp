#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;


void solve() {
    // Your logic here
    int n , m;
    cin>>n>>m;

    string x , s;
    cin>>x>>s;
    for(int i =0;i<=6;i++){
        if(x.find(s) != string::npos){ // checking if s is not founr (string::npose means not found)
            cout<<i<<nl;
            return;
        }
        x = x + x;
    }
    cout<<-1<<nl;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}