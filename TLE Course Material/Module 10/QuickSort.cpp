#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

const ll mod = 1e9 + 7;

int partition(vector<int> &a,int si , int ei){
    //considering the element at si to be our pivot 
    int cnt = 0;
    for(int i = si+1;i<=ei;i++){
        if(a[i]<a[si]){
            cnt++;
        }
    }

    int partition_index = si + cnt;
    swap(a[si],a[partition_index]);
    int i =0 , j = partition_index - 1;
    while(i<partition_index && j<=ei){
        if(a[i] < a[partition_index]){
            i++;
            continue;
        }
        if(a[j] >= a[partition_index]){
            j++;
            continue;
        }

        swap(a[i] , a[j]);
        i++;
        j++;
    }
    return partition_index;
}

void quicksort(vector<int> &a,int si , int ei){
    if(si>=ei){
        return;
    }
    int p = partition(a,si,ei);
    quicksort(a,si,p-1);
    quicksort(a,p+1,ei);
}

void solve() {
    // Your logic here
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    quicksort(a,0,n-1);
    for(auto ch:a){
        cout<<ch<<" ";
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