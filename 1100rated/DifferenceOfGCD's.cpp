#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;
const int maxi = 1e9 + 7;
void solve() {
    // Your logic here
    ll n , l ,r;
    cin>>n>>l>>r;

    vector<ll>ans;
    ll i = 1;
    ll cnt = 0;
    bool is_possible = true;
    while(is_possible){
        ll rem = (l+i-1)/i;
        ll res = i*rem;
        if(res>r){
            cout<<"NO"<<nl;
            return;
        }
        ans.push_back(res);
        i++;
        cnt++;
        if(cnt>=n){
            break;
        }
    }

    cout<<"YES"<<nl;
    for(auto p:ans){
        cout<<p<<" ";
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