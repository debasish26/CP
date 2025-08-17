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
    int n;
    cin>>n;

    string s;
    cin>>s;

    bool is_empty = false;

    for(int i =0;i<n-2;i++){
        if(s[i] == '.'){
            if(s[i+1]=='.'){
                if(s[i+2] == '.'){
                    is_empty = true;
                    break;
                }
            }
        }
    }

    if(is_empty){
        cout<<2<<nl;
        return;
    }

    int empty = 0;
    for(int i =0;i<n;i++){
        if(s[i] == '.'){
            empty++;
        }
    }

    cout<<empty<<nl;
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

// if found sequence of 3 empty place then the ans is 2 else the ans is no of empty cells

// ###... n = 6
// n - 3 = 3
//