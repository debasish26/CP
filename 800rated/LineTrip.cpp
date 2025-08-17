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
    int n , x;
    cin>>n>>x;
    vector<int> pomp(n);
    for(int i =0;i<n;i++){
        cin>>pomp[i];
    }

    //calculate distance of first petrol pump with 0;

    int first_pomp = pomp[0] - 0;

    // calculate distance between between n petrol pum

    int ineer_pomp = INT_MIN;
    for(int i =1;i<n;i++){
        int dist = pomp[i] - pomp[i-1];
        ineer_pomp = max(dist , ineer_pomp);
    }

    //calculate last distance of pomp
    int last_pomp = 2*(x - pomp[n-1]);

    int res = max(first_pomp,ineer_pomp);
    int ans = max(res,last_pomp);

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