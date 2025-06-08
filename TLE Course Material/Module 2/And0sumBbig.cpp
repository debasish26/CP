#include<iostream>
#include<vector>
#include<string>
using namespace std;
const int MOD = 1e9 + 7;
int main(){

    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long ans = 1;
        for (int i = 0; i < k; i++){

            ans = (ans * n) % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
