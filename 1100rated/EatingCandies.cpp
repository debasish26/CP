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
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int i = 0;
    int j = n-1;
    int alice = 0;
    int bob = 0;
    int ans = 0;
    while(i<=j){
        if(alice<=bob){
            alice = alice + a[i];
            i++;
        }else{
            bob = bob + a[j];
            j--;
        }

        if(alice == bob){
            ans = i + (n-1-j);
        }
    }
    cout<<ans<<nl;

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
