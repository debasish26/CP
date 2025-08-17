#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

void DecToBin(int num){
    // code to convert a decimal to binary TC O(log n);
    string s;
    while(num > 0){
        if(num % 2 == 0){
            s = s + '0';
            num = num / 2;
        } else{
            s = s+ '1';
            num = num / 2;
        }
    }
    cout<<s<<nl;
}

void solve() {
    // Your logic here
    cout<<__builtin_popcount(10)<<nl; // gives number of set bits;
    cout<<__builtin_clz(10)<<nl; // gives number of leading zeros like for 10 its is 28 leading zeros (total 32 bits 00000 upto 28 then 0101 (which is 10))
    cout<<__builtin_ctz(10)<<nl; // gives number of trailing zeros

    int num = 20 | 10;
    cout<<num<<nl;
    DecToBin(num);

    num = 10 & 14;
    cout<<num<<nl;
    DecToBin(num);

    num = (10 ^ 5); // in bitwisw xor if we are doing 3 or numbers xor at same time if the num of set bits is even then 0 else 1
    cout<<num<<nl;
    DecToBin(num);

    num = 5<<1;
    cout<<num<<nl; // left shift the value B bits and set 0  at last its same as (a*2^b) a multiply 2 to the power b
    DecToBin(num);

    num = 5 >>1; // right shift operator
    cout<<num<<nl; // its same as (a / 2^b) a divided by 2 to the power b
    DecToBin(num);


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
