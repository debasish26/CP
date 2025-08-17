#include<iostream>
#include<vector>
#include<string>
using namespace std;


long long facto(long long n){
    if(n == 0 || n == 1)
        return 1;
    return n * facto(n - 1);
}
int main(){
    long long n;
    cin >> n;

    cout << facto(n) << endl;

    return 0;
}
// for n = 3 = 1 * 2 * 3 means fact(n - 1) * n
