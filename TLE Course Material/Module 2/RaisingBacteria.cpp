#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    long long x;
    cin >> x;
    int bits_count = 0;
    for (int i = 0; i < 32;i++){
        if(((1<<i) & x) > 0){
            bits_count++;
        }
    }
    cout << bits_count << endl;
    return 0;
}
