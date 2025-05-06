#include <iostream>
using namespace std;

// Phép chuyển vị của ma trận 2 chiều.
int **transposeMatrix(int **matrix, int r, int c)
{
    // Kiểm tra ma trận rỗng
    if (r == 0 || c == 0)
    {
        return NULL;
    }

    // Cấp phát bộ nhớ cho ma trận kết quả kích thước c x r
    int **result = new int *[c];
    for (int i = 0; i < c; i++)
    {
        result[i] = new int[r];
    }

    // Thực hiện phép chuyển vị: b[i][j] = a[j][i]
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            result[i][j] = matrix[j][i];
        }
    }

    return result;
}