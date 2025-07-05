#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

void solve() {
    // Your logic here
    int n , k;
    cin>>n>>k;
    vector<int>v;
    for(int i =2;i*i<=n;i++){
        while(n%i==0){
            n/=i;
            v.push_back(i);
        }
    }
    if(n>1){
        v.push_back(n);
    }
    if(v.size() < k){
        cout<<-1<<nl;
    } else{
        int last = 1;
        for(int i =k-1;i<v.size();i++){
            last *= v[i];
        }
        for(int i =0;i<k-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<last<<nl;
    }
}

int main() {
    fast_io;

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    
    solve();

    return 0;
}