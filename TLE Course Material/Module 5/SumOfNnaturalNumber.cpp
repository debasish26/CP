#include<iostream>
#include<vector>
#include<string>
using namespace std;

int fib(int n){
    if(n == 1)
        return 1;
    return fib(n - 1) + n;
}

int main(){

    int n = 2;

    cout << fib(2) << endl;
    return 0;
}

// sum of n nat number = sum(n - 1) + n;
