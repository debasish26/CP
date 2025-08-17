#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    // Your logic here
    int n;
    cin>>n;
    vi ar(n);
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    vi ans(n,0);
    ll mn = *min_element(ar.begin() , ar.end());
    ll mx = *max_element(ar.begin() , ar.end());

    if(mn == mx){
        cout<<"NO"<<nl;
        return;
    }else{
        cout<<"YES"<<nl;
        for(ll i =0;i<n;i++){
            if(ar[i] == mx){
                ans[i] = 1;
            } else{
                ans[i] = 2;
            }
        }
        for(ll i =0;i<n;i++){
            cout<<ans[i]<<' ';
        }
        cout<<nl;
    }

    

}

int main() {                                                
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
