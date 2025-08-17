#include<iostream>
#include<vector>
#include<string>
using namespace std;

int fibo(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    return fibo(n - 1) + fibo(n - 2);
}


    int main()
{

    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n,0);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] = fibo(i + 2);
            sum += a[i];
        }
        vector<int> ans(m);
        while(m--){
            int l, w, h;
            cin >> l >> w >> h;
            if(sum <= l || sum <= w || sum <= h){
                ans.push_back(1);
            }else {
                ans.push_back(0);
            }

        }

        for (int i = 0; i < n;i++){
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
