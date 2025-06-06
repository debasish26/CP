#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> v[i][j];
        }

    }
    vector<vector<int>> prefix(n, vector<int>(m));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            // prefix[i][j] = prefix[i][j - 1] + prefix[i - 1][j] - prefix[i - 1][j - 1] + v[i][j];
            // it can give segmentation error if i or j becomes 0         }
            prefix[i][j] = v[i][j];
            if(j>0){
                prefix[i][j] += prefix[i][j - 1];
            }
            if(i>0){
                prefix[i][j] += prefix[i - 1][j];
            }
            if(i>0 && j > 0){
                prefix[i][j] -= prefix[i - 1][j - 1];
            }
            
    }
        return 0;
}
