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
    string s;
    cin>>s;

    int n = s.size();
    set<char> c;
    int k;
    for(k =0;k<n;k++){
        if(c.find(s[k]) == c.end()){
            c.insert(s[k]);
        }else{
            break;
        }
    }
    for(int i = k;i<n;i++){
        if(s[i] != s[i-k]){
            cout<<"NO"<<nl;
            return;
        }
    }

    cout<<"YES"<<nl;
    
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