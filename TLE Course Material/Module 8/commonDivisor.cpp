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
    int N = 1e6 + 1;
    int n;
    cin>>n;
    vector<int> freq(N , 0);
    vector<int> x(n);
    for(int i =0;i<n;i++){
        cin>>x[i];
        freq[x[i]]++;
    }

    for(int d = N -1;d>=1;d--){
        int cnt =0;
        for(int i = d;i<N; i +=d){
            cnt += freq[i];
            if(cnt >= 2){
                break;
            }
        }
        if(cnt >= 2){
            cout<<d<<nl;
            return;
        }
    }
    cout<<1<<nl;
}

int main() {
    fast_io;

    int t = 1;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}