#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n, p;
        cin >> n >> p;

        vector<int> A(n);
        for (int i = 0; i < n;i++){
            cin >> A[i];
        }
        vector<int> B(n);
        for (int i = 0; i < n;i++){
            cin >> B[i];
        }
        vector<pair<long long, long long>> cost_cap;
        cost_cap.push_back({p, n + 1});
        for (int i = 0; i < n;i++){
            cost_cap.push_back(make_pair(B[i], A[i]));

        }
        sort(cost_cap.begin(),cost_cap.end());
        int total = 1;
        long long cost = p;
        for (int i = 0; i < n;i++){
            int left = n - total;
            if(cost_cap[i].second <= left){
                total = total + cost_cap[i].second;
                cost = cost + cost_cap[i].first * cost_cap[i].second;
            } else {
                total = n;
                cost = cost + left * cost_cap[i].first;
            }
        }
        cout << cost << endl;
    }
    return 0;
}

// Gaand Faad Implementation
