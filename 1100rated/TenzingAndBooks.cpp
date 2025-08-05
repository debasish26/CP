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
    int n , x;
    cin>>n>>x;

    vector<int>a(n) , b(n),c(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        cin>>b[i];
    }
    for(int i =0;i<n;i++){
        cin>>c[i];
    }

    int ans =0;
    for(int i =0;i<n;i++){
        if((a[i]|x) !=x ){
            break;
        }
        ans |= a[i];
    }

    for(int i =0;i<n;i++){
        if((b[i]|x) !=x ){
            break;
        }
        ans |= b[i];
    }

    for(int i =0;i<n;i++){
        if((c[i]|x) !=x ){
            break;
        }
        ans |= c[i];
    }

    if(ans == x){
        cout<<"YES"<<nl;
        return;
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
