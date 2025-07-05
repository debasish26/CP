#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const int N = 1e7 + 1000;
bool prime[N];

void sieve(){
    for(int i = 0; i < N; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i * i < N; i++){
        if(prime[i]){
            for(int j = i * i; j < N; j += i){
                prime[j] = 0;
            }
        }
    }
}

void solve(ll x) {
    // Your logic here
    ll root = sqrt(x);
    if(root * root == x){
        if(prime[root]){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
    }else{
        cout<<"NO"<<nl;
    }
}

int main() {
    fast_io;
    sieve();
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    int n;
    cin>>n;
    vector<ll> x(n); // use long long
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < n; i++){
        solve(x[i]);
    }

    return 0;
}