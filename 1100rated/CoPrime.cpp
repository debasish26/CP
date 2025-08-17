#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

vector<int> pairs[1001];

void solve() {
    // Your logic here
    int n;
    cin>>n;

    vector<int>a(n+2);
    vector<int> idx(1001,0);
    for(int i =1;i<=n;i++){
        cin>>a[i];
        idx[a[i]] = i;
    }

    int ans = -1;
    for(int i = 1;i<=1000;i++){
        if(idx[i] == 0){
            continue;
        }
        for(int j: pairs[i]){
            if(idx[j] != 0){
                ans = max(ans,idx[i] + idx[j]);
            }
        }
    }

    cout<< ans<<nl;
    
    
}

int main() {
    fast_io;

    for(int i =1;i<=1000;i++){
        for(int j =1;j<=1000;j++){
            if(__gcd(i,j)==1){
                pairs[i].push_back(j); // will store all j for i as vector then when i change vector change
            }
        }
    }

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}

// vector<int> pairs[1001] is 1001 different vectors and each vector 
// is going to store all the possible values which are coprime eith its index
// its different from2d vector and 1d vector