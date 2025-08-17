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
    string s;

    cin>>n;
    cin>>s;
    if(n == 0){
        cout<<0<<nl;
        return;
    }
    int sz = s.size();

    int l = 0;
    int r = n -1;
    int a = 1;
    while(l<r && a == 1){
        if(s[l] == s[r]){
            a = false;
            break;
        }
        l = l + 1;
        r = r - 1;
    }
    cout<<(r - l) + 1<<nl;

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

// 100 
// final string size is 1
// 1010
// initial string size is 0
// 10101
// 010
//
//0111
//11
// last and first are some so this is the final string
//10101
//0
// first check if first and last elem is not same take two pinters l and r initialise them with 0 and n-1
// while(a is true) decrement j and increment i if found where a[i] and a[j] is same then a = false;
// then a[n-1] - j is the ans 

// if a[l] == a[4] then ans is (a[r] - a[l]) + 1;
//0111 l = 1 and r = 2
// 2- 1 = 1 + 1 = 2