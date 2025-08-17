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

    string s;
    cin>>s;

    map<char ,int> freq;
    int count = 0;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        freq[s[i]] = freq[s[i]] + 1;
        if(freq[s[i]] == 1){
            count = count+ 1;
        }
        a[i] = count;
    }

    ll ans = 0;
    for(int i =0;i<n;i++){
        ans = ans + a[i];
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

/* for a 5 char long string if we want to check how many distinct string we can make
 for a dist string of len 5 can make is 1
 lrts say a dist string of len 4 is x1
 lets say a dist string of len 3 is x2
 lets say a dist string of len 2 is x3
 lets say a dist string of len 1 is x4

 so total ans is 1 + x1 + x2 + x3 + x4

 // if we can find out the value of x1 , x2 or x3 it will be easy

 lets say for x3 lets take a string abcde
 for a dist string of len 3 
 first for ops 2 ops - acde and bcde
 now for acde also 2 ops = ade and cde
 now for bcde also 2 ops = bde and cde
 // if we chacke for n = 3 the last 2 digit didnot change only the 3rd is change 
 and on that we can place value wgich are distinct previously till 3rd place so 
 for n = 3 we have 3 dist value till 3rd place so total comb is 3 so x3 is 3

 similarly we can find for all xs

 check a vector caluclate all the didtinct value till that place and store it 
 at the index of that place and at last sum them up






*/