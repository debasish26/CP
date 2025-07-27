#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int sz = s.size();
    int open = 0;
    int steps = 0;
    for(int i =0;i<sz;i++){
        if(s[i] == '('){
            open++;
        } else{
            open--;
            if(open < 0){
                open = 0;
                steps++;
            }
        }
    }

    cout<<steps<<nl;    
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
