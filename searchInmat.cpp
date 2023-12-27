#include <bits/stdc++.h>
using namespace std;
// brute force
/*int matSearch(int mat[][3], int N, int M, int X)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mat[i][j] == X)
            {
                return 1;
            }
        }
    }
    return 0;
}*/
int matSearch(int mat[][3], int n, int m, int X)
{
    int row = 0;
    int col = m - 1;

    while (row < n && col >= 0)
    {
        if (mat[row][col] == X)
        {
            return 1;
        }
        else if (mat[row][col] < X)
        {
            row++;
        }
        else
        {

            col--;
        }
    }
    return 0;
}
int main()
{
    int mat[3][3] = {3, 30, 38, 44, 52, 54, 57, 60, 69};
    int target = 0;

    if (matSearch(mat, 3, 3, target))
    {
        cout << "Element " << target << " is present in the matrix." << endl;
    }
    else
    {
        cout << "Element " << target << " is not present in the matrix." << endl;
    }

    return 0;
}