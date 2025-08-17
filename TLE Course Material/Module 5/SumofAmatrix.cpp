#include <iostream>
using namespace std;

const int MAX = 100;
int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
int R, C;

void addMatrices(int row, int col)
{
    if (row == R)
        return; // base case: finished all rows

    result[row][col] = A[row][col] + B[row][col];

    if (col + 1 < C)
        addMatrices(row, col + 1); // move to next column
    else
        addMatrices(row + 1, 0); // move to next row
}

int main()
{

    cin >> R >> C;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> A[i][j];


    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> B[i][j];

    addMatrices(0, 0); // start recursion from top-left

    // Output Result Matrix
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
