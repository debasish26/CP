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

    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    
    int min = *min_element(v.begin() , v.end());

    if(v[0] != min){
        cout<<"No"<<nl;
        return;
    }

    cout<<"Yes"<<nl;
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
//

// 1 10 9 6 7 8 5
// 2 3 1 4
// 2 1 3 4
// the min elem should be presnet at the start else no
// if the sequence is borke then NO
// if max elem present at 0 then also no