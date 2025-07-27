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
    int n , r , b;
    cin>>n>>r>>b;

    int gaps = r / (b + 1);
    int extra = r % (b+1);

    for(int i =0;i<(b+1);i++){
        for(int j =0;j<gaps;j++){
            cout<<"R";
        }
        if(extra != 0){
            cout<<"R";
            extra--;
        }
        if(i !=b){
            cout<<"B";    
        }
        
    }
    cout<<nl;
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