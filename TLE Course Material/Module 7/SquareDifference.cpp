#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    // Your logic here
    ll a , b;
    cin>>a>>b;

    if((a - b) != 1){
        cout<<"NO"<<nl;
        return;
    }

    ll num = a + b;
    int cnt =0;
    for(ll i =2;i*i<=num;i++){
        if(num % i == 0){
            while(num%i == 0){
                cnt++;
                num = num / i;
            }
        }
    }
    if(num>1){
        cnt++;
    }
    if(cnt == 1){
        cout<<"YES"<<nl;
    } else{
        cout<<"NO"<<nl;
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