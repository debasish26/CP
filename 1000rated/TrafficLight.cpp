#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        s += s; //concatinate s to itself to make a complete cycle
        n *= 2; //length of the complete cycle
        long long g_loc = -1;
        long long ans = INT_MIN;
        for (long long i = n - 1; i >= 0;i--){
            if(s[i] == 'g'){
                g_loc = i;
            }
            if(s[i] == c){
                long long dif = g_loc - i;
                ans = max(ans, dif);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
