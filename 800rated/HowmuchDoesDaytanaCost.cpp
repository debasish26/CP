#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

void solve(){
    int n , k;
    cin>>n>>k;

    vector<int> a(n);
    int ans = 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i] == k){
            ans = 1; 
        }
    }

    if(ans == 1){
        cout<<"YES"<<nl;
    }else{
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


// if i found k in  the array then [i , i] is the subsegment where k is maximum