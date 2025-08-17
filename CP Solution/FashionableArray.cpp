#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        vector<int> copy = a;
        sort(copy.begin(), copy.end());
        int sum = copy[0] + copy[n - 1];
        if(sum % 2 != 0){
            int left = 0;
            int right = 0;
            for (int i = 1; i < n;i++){
                if(copy[0] % 2 != copy[i] % 2){
                    left = i;
                    break;
                }
            }
            for (int i = n - 2; i >= 0; i--)
            {
                if (copy[n - 1] % 2 != copy[i] % 2)
                {
                    right = n - 1 - i;
                    break;
                }
            }
            cout << min(left, right) << endl;
        }else {
            cout << 0 << endl;
        }
    }
    return 0;
}

/*
3 1 4 1 5 9 2

1 1 2 3 4 5 9




2 7 4 6 9 11 5
2 4 5 6 7 9 11

1 4 5 6 7 9 12


max is even ans min is odd then need to find the
*/
