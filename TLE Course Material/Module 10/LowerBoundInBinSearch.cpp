#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

bool helper(ll mid , ll n){
    if((mid*mid) <= n){
        return true;
    }else{
        return false;
    }
}

void solve() {
    // Your logic here
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cin>>target;

    sort(a.begin() , a.end());

    int si = 0 , ei = n-1;
    int ans = -1;
    while(si<=ei){
        int mid = si + (ei - si)/2;
        if(a[mid]>=target){
            ans = mid;
            ei = mid -1;
        }else{
            si = mid + 1;
        }
    }
    if(ans == -1){
        cout<<"Lower Bound does not present"<<nl;
        return;
    }

    cout<<a[ans]<<nl;
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