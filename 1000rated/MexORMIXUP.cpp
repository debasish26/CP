#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

ll xor_x(ll n){
    ll a = n % 4;

    if(a==0){
        return n;
    }
    if(a==1){
        return 1;
    }
    if(a==2){
        return n + 1;
    }
    
    return 0;
}

void solve() {
    // Your logic here
    ll a , b;
    cin>>a>>b;
    ll arr_x = xor_x(a-1);

    if(arr_x == b){
        cout<<a<<nl;
        return;
    }

    if((arr_x ^ b) != a){
        cout<<a+1<<nl;
        return;
    }

    cout<<a+2<<nl;
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