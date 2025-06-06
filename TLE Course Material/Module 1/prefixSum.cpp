#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    vector<int> p(n);
    p[0] = a[0];
    for (int i = 0; i < n;i++){
        p[i] = p[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << p[r] - ((l == 0) ? 0 : p[l - 1]);
    }
    return 0;
}
