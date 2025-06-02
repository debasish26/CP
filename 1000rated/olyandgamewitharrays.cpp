#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long first_elem = INT_MAX;
        long long second_elem = 0;
        long long second_min = INT_MAX;
        for (long long i = 0; i < n;i++){
            int m;
            cin >> m;
            vector<long long> arr(m);
            for (int i = 0; i < m;i++){
                cin >> arr[i];
            }
            sort(arr.begin(), arr.end());
            first_elem = min(first_elem, arr[0]);
            second_min = min(second_min, arr[1]);
            second_elem = second_elem + arr[1];
        }
        cout << (second_elem - second_min) + first_elem << endl;
    }
    return 0;
}

/*
    sum of element of 2nd line - minimum value of the second line + min of first line

*/
