#include<iostream>
#include<vector>
#include<string>
using namespace std;

int helper(int idx, int left, int weight[], int value[],int n){
    if(idx == n){
        return 0;
    }
    if(left >= weight[idx]){
        return max(helper(idx + 1, left, weight, value, n), helper(idx + 1, left - weight[idx],weight , value, n) + value[idx]);
    } else {
        return helper(idx + 1, left, weight, value, n);
    }
}

    int main()
{

    int n, w;
    cin >> n >> w;
    int weight[n], value[n];
    for (int i = 0; i < n;i++){
        cin >> weight[i] >> value[i];
    }
    cout << helper(0, w, weight, value, n) << endl;
    return 0;
}
