#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    //Your logic here
    ll N;
    cin>>N;
    ll p = 0, q = 0;
    for(ll i = 2;i*i*i<=N;i++){
        if(N % i == 0){
            if(N % (i*i) == 0){
                p = i;
                q = N/(i*i);
                break;
            }else{
                q = i;
                p = ll(sqrt(N/q));
                break;
            }
        }
    }
    cout<<p<<" "<<q<<nl;
    // cout<<sqrt(63/2)<<nl;
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