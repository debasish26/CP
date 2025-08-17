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

    vector<int> a(n);

    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    if(a[0] == a[n-1]){
        cout<<"NO"<<nl;
        return;
    }

     int maxi = *max_element(a.begin(),a.end());
     cout<<"YES"<<nl;
     cout<<maxi<<" ";
     for(auto p: a){
        if(p == maxi){
            maxi = 0;
            continue;
        }
        cout<<p<<" ";
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