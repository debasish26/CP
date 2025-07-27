#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

void solve() {
    // Your logic here
    int n;
    cin>>n;
    int arr[n];
    vector<int> temp(1024,0);

    for(int i =0;i<n;i++){
        cin>>arr[i];
        temp[arr[i]]++;
    }

    int ans = -1;
    for(int k =1;k<=1023;k++){
        vector<int>freq(1024,0);
        for(int i = 0;i<n;i++){
            freq[arr[i]^k]++;
        }
        bool flag = true;
        for(int i =0;i<1024;i++){
            if(temp[i] != freq[i]){
                flag = false;
                break;
            }
        }
        if(flag == true){
            ans = k;
            break;
        }

    }
    cout<<ans<<nl;
    

}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    //solve();

    return 0;
}

// a1 a2 a3
// lets say a1 ^ k = a3
// then a3 ^ k = a1
// 
