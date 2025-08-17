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
    int a , b , c , d;
    cin>>a>>b>>c>>d;

    if(d <b){
        cout<<-1<<nl;
        return;
    }
    int y_bar = d - b;

    int a_bar = a + y_bar;

    if(a_bar< c){
        cout<<-1<<nl;
        return;
    }

    int x_bar = a_bar - c;

    y_bar = y_bar + x_bar;
    cout<<y_bar<<nl;


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