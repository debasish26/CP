#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const int N = 1e7;
bool prime[N];
int ans[N];
void sieve(){
    for(int i = 0;i<N;i++){
        prime[i] = 1;
    }
    for(int i = 0;i<N;i++){
        ans[i] = 0;
    }
    prime[0] = prime[1] = 0;

    for(int i =2;i*i<=N;i++){
        if(prime[i]){
            for(int j = i*i;j<N;j+=i){
                prime[j] = 0;
            }
        }
    }
    for(int x =1;x<=5000;x++){
        for(int y = 1;y<=90;y++){
            int res = x*x + y*y*y*y;
            if(res>=N){
                break;
            }
            if(prime[res]){
                ans[res] = 1;
            }
        }
    }
    for(int i =1;i<N;i++){
        ans[i] = ans[i] + ans[i-1];
    }
}

void solve() {
    // Your logic here
    ll n;
    cin>>n;
    cout<<ans[n]<<nl;
    
}

int main() {
    fast_io;
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}