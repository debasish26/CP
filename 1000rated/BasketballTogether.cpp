#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    long long N, D;
    cin >> N >> D;
    vector<long long> P(N);
    for (long long i = 0; i < N;i++){
        cin >> P[i];
    }
    sort(P.begin(), P.end());
    long long l = -1;
    long long r = N - 1;
    long long teamsize = 1;
    long long team = 0;
    while(l < r){
        if(P[r]*teamsize <= D && l < r){
            teamsize++;
            l++;
        } else{
            teamsize = 1;
            r--;
            team++;
        }
    }
    cout << team << endl;
    return 0;
}

// Two pointer question needed to think greedily form a team with max power and min power
