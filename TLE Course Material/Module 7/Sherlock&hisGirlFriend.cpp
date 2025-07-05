#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

const int M = 100005;
bool prime[M];

void sieve(int N){
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
    int n;
    cin >> n;
    sieve(M); // always build full sieve

    if(n <= 2){
        cout << 1 << nl;
    } else {
        cout << 2 << nl;    
    }

    for(int i = 0; i < n; i++){
        if(prime[i + 2]){
            cout << 1 << " ";
        } else {
            cout << 2 << " ";
        }
    }
    cout << nl;
}

int main() {
    fast_io;
    solve();
    return 0;
}
