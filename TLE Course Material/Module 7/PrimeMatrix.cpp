#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const int N = 1e5 + 1000;
bool prime[N];

void sieve(){
    for(int i = 0; i < N; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i * i < N; i++){
        if(prime[i]){
            for(int j = i * i; j < N; j += i){
                prime[j] = 0;
            }
        }
    }
}

void solve() {
    // Your logic here
    ll n , m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m,0));
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int row_min = INT_MAX;
    int col_min = INT_MAX;

    for(int i =0;i<n;i++){
        int steps = 0;
        for(int j = 0;j<m;j++){
            int num = matrix[i][j];
            int cnt = 0;
            while(prime[num] == 0){ 
                cnt++;
                num++;
            }
            steps = steps + cnt;
        }
        row_min = min(steps,row_min);
    }
    for(int i =0;i<n;i++){
        int steps = 0;
        for(int j = 0;j<m;j++){
            int num = matrix[j][i];
            int cnt = 0;
            while(prime[num] == 0){ 
                cnt++;
                num++;
            }
            steps = steps + cnt;
        }
        col_min = min(steps,col_min);
    }
    cout<<min(row_min,col_min)<<nl;
}

int main() {
    fast_io;
    sieve();
    

    solve();

    return 0;
}