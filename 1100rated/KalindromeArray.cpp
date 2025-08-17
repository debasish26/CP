#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;
int check(vector<int> &a , int target){
    int n = (int)a.size();
    vector<int> temp;
    for(int i =0;i<n;i++){
        if(a[i] != target){
            temp.push_back(a[i]);
        }
    }
    int is_palindrome = 1;
    int temp_sz = (int)temp.size();
    int sz = temp_sz/2;
    for(int i =0;i<sz;i++){
        if(temp[i] != temp[temp_sz - 1 - i]){
            is_palindrome = 0;
            break;
        }
    }

    return is_palindrome;
}

void solve() {
    // Your logic here
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    int idx = -1;
    int nn = n/2;
    for(int i =0;i<nn;i++){
        if(a[i] != a[n-1-i]){
            idx = i;
            break;
        }
    }

    if(idx == -1){
        cout<<"YES"<<nl;
        return;
    }

    int ans1 = check(a,a[idx]);
    int ans2 = check(a,a[n-1-idx]);

    if(ans1 == 1 || ans2 == 1){
        cout<<"YES"<<nl;
        return;
    }

    cout<<"NO"<<nl;

    
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

// if for any x after removing it the array can be palindrome
// find the i for which the n-1-i is not same then by removing either
// one of them makes the array palindrom then yes else NO