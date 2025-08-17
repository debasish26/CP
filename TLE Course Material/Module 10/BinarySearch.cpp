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

    sort(a.begin(),a.end());

    int target;
    cin>>target;
    int si = 0; int ei = n-1;
    while(si<=ei){
        int mid = si + (ei - si)/2;
        if(a[mid] == target){
            cout<<"YES"<<nl;
            return;
        } else if(target>a[mid]){
            si = mid + 1;
        }else{
            ei = mid -1;
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