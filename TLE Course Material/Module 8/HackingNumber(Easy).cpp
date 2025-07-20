#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

ll add(ll y){
    cout<< "add "<< y << nl;
    ll r;
    cin>>r;
    return r;
}
ll mul(ll y){
    cout<<"mul "<< y << nl;
    ll r;
    cin>>r;
    return r;
}
ll div(ll y){
    cout<<"div "<<y<<nl;
    ll r;
    cin>>r;
    return r;
}
ll dig(){
    cout<<"digit"<<nl;
    ll r;
    cin>>r;
    return r;
}
ll done(){
    cout<<"!"<<nl;
    ll r;
    cin>>r;
    if(r == -1){
        exit(0);
    }
    return r;
}

void solve() {
    // Your logic here
    ll n;
    cin>>n;
    dig();
    dig();
    add(-8);
    add(-4);
    add(-2);
    add(-1);
    add(n - 1);
    done();
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}