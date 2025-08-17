#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    // Your logic here
    ll n;
    cin>>n;
    int c =0;
    for(int i =1;i<50;i++){
        if((n%i)==0){
            c++;
        } else{
            break;
        }
    }

    cout<<c<<nl;
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