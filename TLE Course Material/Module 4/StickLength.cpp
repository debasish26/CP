#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(){

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    long long median;
    if(n & 1){
        median = (a[n / 2]);
    } else {
        median = (a[n / 2 - 1] + a[n / 2 ]) / 2;
    }
    long long ans= 0;
    for (int i = 0; i < n;i++){
        ans += abs((a[i] - median));
    }
    cout << ans << endl;

    return 0;
}

// median of the number
