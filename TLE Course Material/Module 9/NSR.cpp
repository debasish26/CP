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

    vector<int> ans;
    stack<int>s;
    //NSR

    for(int i =n-1;i>=0;i--){
        while(!s.empty() && s.top() >= a[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(s.top());
        }

        s.push(a[i]);
    }

    for(int i = n-1;i>=0;i--){
        cout<<ans[i]<<" ";
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