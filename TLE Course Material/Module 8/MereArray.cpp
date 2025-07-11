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
    vector<ll> v(n);
    
    for(int i =0;i<n;i++){
        cin>>v[i];
    }

    ll minn = *min_element(v.begin(),v.end());
    multiset<ll>st;

    for(int i =0;i<n;i++){
        if(v[i] % minn == 0){
            st.insert(v[i]);
        }
    }
    for(int i =0;i<n;i++){
        if(v[i] % minn == 0){
            ll temp = *st.begin();
            v[i] = temp;
            st.erase(st.find(temp));        }
    }
    for(int i =1;i<n;i++){
        if(v[i]<v[i-1]){
            cout<<"NO"<<nl;
            return;
        }
    }
    cout<<"YES"<<nl;

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