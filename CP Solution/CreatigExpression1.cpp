#include <iostream>
#include <vector>
using namespace std;

bool solve(int idx, long long currentSum, const vector<long long> &A, long long target)
{
    if (idx == A.size())
    {
        return currentSum == target;
    }

    // Try adding or subtracting A[idx] from currentSum
    return solve(idx + 1, currentSum + A[idx], A, target) ||
           solve(idx + 1, currentSum - A[idx], A, target);
}

int main()
{
    int N;
    long long X;
    cin >> N >> X;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    // Start from index 1 with the first element as base value
    if (solve(1, A[0], A, X))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
