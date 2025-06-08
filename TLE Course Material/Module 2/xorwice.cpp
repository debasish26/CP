#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    long long t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long x = (a & b);
        long long ans1 = (a ^ x);
        long long ans2 = (b ^ x);


        cout << ans1 + ans2 << endl;
    }
    return 0;
}
