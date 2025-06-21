#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        cout << 2 * (64 - __builtin_clzll(x)) + 1 << endl;
    }
    return 0;
}
