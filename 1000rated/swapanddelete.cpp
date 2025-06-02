#include<iostream>
#include<vector>
#include<string>
#include <cstdlib>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int size = s.size();
        if(size > 0){
            int ones = 0;
            int zeros = 0;
            int ans = 0;
            for (int i = 0; i < size; i++)
            {
                if (s[i] == '1')
                {
                    ones++;
                }
                else
                {
                    zeros++;
                }
            }
            for (int i = 0; i < size;i++){
                if(s[i] == '1' && zeros > 0){
                    zeros--;
                    ans++;
                } else if(s[i] == '0' && ones > 0){
                    ones--;
                    ans++;
                } else {
                    break;
                }
            }
            cout << size - ans << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
