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
    ll n;
    cin>>n;

    vector<int> a(n);

    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    ll ans =INT_MIN;
    ll i =0 , j = 0;
    ll sum =0;

    while(j<n){
        if(sum<0){
            sum = 0;
            i = j;
        }

        if(i<j){
            if ((abs(a[j]) % 2) != (abs(a[j - 1]) % 2)){
                sum += a[j];
            } else{
                sum = a[j];
                i = j;
            }
        }
        else{
            sum = a[j];
        }
        ans = max(ans,sum);
        j++;
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