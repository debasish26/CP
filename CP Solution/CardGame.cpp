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

    if(s[0] == s[n-1]){
        if(s[0] == 'A'){
            cout<<"Alice"<<nl;
        }else{
            cout<<"Bob"<<nl;
        }
    }
    else if(s[0] == 'A' && s[n-1] == 'B'){
        if(count(s.begin(),s.end(),'B') == 1){
            cout<<"Alice"<<nl;
        }else{
            cout<<"Bob"<<nl;
        }
    }
    else{
        if(n==2){
            cout<<"Bob"<<nl;
        }else{
            if(s[n-2] =='A'){
                cout<<"Alice"<<nl;
            }else{
                cout<<"Bob"<<nl;
            }
        }
    }

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