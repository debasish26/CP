#include<iostream>
#include<vector>
#include<string>
using namespace std;

int helper(int row , int col,int n, int m , vector<vector<int>>&v){
    if(row == n-1 && col== m-1){
        return v[row][col];
    }

    if(row<n-1){
        if(col<m-1){
            return max(helper(row, col + 1, n, m, v) + v[row][col], helper(row + 1, col, n, m, v) + v[row][col]);
        } else{
            return helper(row + 1, col, n, m, v) + v[row][col];
        }
    }
    else{
        if(col<m-1){
            return helper(row, col + 1, n, m, v) + v[row][col];
        }
    }
}

    int main()
{

    long long n, m;
    cin >> n >> m;

    vector < vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> v[i][j];
        }
    }
    cout << helper(0, 0, n, m, v) << endl;

    return 0;
}
