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
    int ans =0;
    for(int i =2;i<=n;i++){
        int num = i;
        int cnt = 0;
        for(int j = 2;j*j<=num;j++){
            if(num%j==0){
                cnt++;
                while(num%j==0){
                    num = num / j;
                }
            }
        }
        if(num>1){
            cnt++;
        }
        if(cnt == 2){
            ans++;
        }
    }
    cout<<ans<<nl;
}

int main() {
    fast_io;

    int t =1;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}
