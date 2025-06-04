#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
#include<limits.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        vector<long long> prefix(n+1,0);
        vector<long long> suffix(n+1,0);
        unordered_set<long long> st(n);

        for (int i = 0; i < n;i++){
            st.insert(s[i]);
            prefix[i] = st.size();
        }
        st.clear();
        for (int i = n-1; i >=0;i--){
            st.insert(s[i]);
            suffix[i] = st.size();
        }
        long long ans = INT_MIN;
        for (int i = 0; i < n;i++){
            ans = max(ans, prefix[i] + suffix[i + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}
