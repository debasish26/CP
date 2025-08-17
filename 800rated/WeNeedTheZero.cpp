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
    ll n;
    cin>>n;

    vector<ll> a(n+1);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    ll total_xor = 0;
    for(int i =0;i<n;i++){
        total_xor ^= a[i];
    }

    if(n%2==1){
        cout<<total_xor<<nl;
    } else{
        if(total_xor == 0){
            cout<<total_xor<<nl;
        } else{
            cout<<-1<<nl;
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