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
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    if(n == 1){
        cout<<1<<nl;
        return;
    }
    vector<int>prefix_gcd(n);
    vector<int>suffix_gcd(n);

    prefix_gcd[0] = a[0];
    suffix_gcd[n-1] = a[n-1];

    for(int i =1;i<n;i++){
        prefix_gcd[i] = __gcd(prefix_gcd[i-1],a[i]);
    }
    for(int i = n-2;i>=0;i--){

        suffix_gcd[i] = __gcd(suffix_gcd[i+1],a[i]);
    }
    int ans =0;
    for(int i =1;i<n-1;i++){
        if(__gcd(prefix_gcd[i-1],suffix_gcd[i+1]) != 1){
            ans++; 
        }
    }
    if(suffix_gcd[1] != 1){
        ans++;
    }
    if(prefix_gcd[n-2] != 1 ){
        ans++;
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