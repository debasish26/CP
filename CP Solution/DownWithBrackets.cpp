#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int v = 0;
        bool ans = false;
        for (int i = 0; i < n;i++){
            if(s[i] == '('){
                v++;
            } else {
                v--;
            }
            if (i > 0 &&i < n - 1 && v == 0){
                ans = true;
            }
        }
        if(ans){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
