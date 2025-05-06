#include <iostream>
using namespace std;

int **readArray()
{
    // Cấp phát bộ nhớ cho ma trận 10x10
    int **matrix = new int *[10];
    for (int i = 0; i < 10; i++)
    {
        matrix[i] = new int[10];
    }

    // Đọc dữ liệu ma trận
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // Đọc phần tử a[i][j]
            cin >> matrix[i][j];

            // Nếu phần tử là 0, tự động gán tất cả phần tử còn lại trong hàng bằng 0
            if (matrix[i][j] == 0)
            {
                // Gán các phần tử còn lại trong hàng là 0
                for (int k = j + 1; k < 10; k++)
                {
                    matrix[i][k] = 0;
                }
                // Thoát khỏi vòng lặp j và chuyển sang hàng tiếp theo
                break;
            }
        }
    }

    // Trả về con trỏ đến ma trận
    return matrix;
}