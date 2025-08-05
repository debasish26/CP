#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;
// Trial division method
bool is_prime(int n) {
    if(n <=1){
        return 0;
    }
    for(int i = 2;i*i<=n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void solve() 
    int x , k;
    cin>>x>>k;
    if(x == 1 && k == 2){
        cout<<"YES"<<nl;
        return;
    }
    if(is_prime(x)){
        if(k == 1){
            cout<<"YES"<<nl;
            return;
        }

    }

    cout<<"NO"<<nl;
    
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