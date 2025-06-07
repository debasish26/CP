#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        vector<int> pre(n);
        pre[0] = v[0];
        for (int i = 1; i < n;i++){
            pre[i] = (pre[i - 1] ^ v[i]);
        }
        int q;
        cin >> q;
        while(q--){
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << (pre[r] ^ (l == 0 ? 0 : pre[l - 1]))<< endl;
        }
    }

    return 0;
}
// Prefix Xor Question
// Given an array of N elements, answer the following Q queries
// ● Query : L, R
// ● Result = A[L] ^ A[L + 1] ^ A[L + 2] ^ ....^ A[R]
