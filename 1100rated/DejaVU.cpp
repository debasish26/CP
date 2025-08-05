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
    ll n , q;
    cin>>n>>q;

    vector<ll> a(n);
    for(ll i =0;i<n;i++){
        cin>>a[i];
    }

    vector<ll> x(q);
    for(ll i =0;i<q;i++){
        cin>>x[i];
    }
    set<ll> used;
    for(int i =0;i<q;i++){
        if(used.count(x[i])){
            continue;
        }else{
            used.insert(x[i]);
        }
        ll val = pow(2,x[i]);
        for(int j =0;j<n;j++){
            if(a[j]%val == 0){
                ll div = (pow(2,x[i] -1));
                a[j] += div;
            }
        }
    }

    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<nl;

    

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

/*
    if a number is divisible by x[i] need to add 2^(x[i]-1)

    calculatr power using pow function 
    pow(2,x[i]);

    if that value is divisible by pow(2,x[i]) chage it to pow(2, x[i] -1)

    but if we do the outer loop will run q times and
    each time we are checing if any element is divisible by x[i] or not

    instead the x is runninng 30 times so there is only 30 possible value
    so run only unique value set<int> used if used.count(x[i]) the continue
    else it will run in that manner the loop will

    run 30 times max and the array will procedded 

    T.C - o(n+q);


*/