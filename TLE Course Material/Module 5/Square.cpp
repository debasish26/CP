#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = stoi(s);
        if(int(sqrt(n)) * int(sqrt(n)) == n){
            cout << "0"<<" "<<int(sqrt(n)) << endl;
        }else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
