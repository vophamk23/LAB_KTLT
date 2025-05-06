#include <iostream>
#include <new> // std::nothrow
using namespace std;

// Hàm deepCopy nhận vào một ma trận (mảng 2 chiều) và kích thước của nó (r hàng, c cột)
int **deepCopy(int **matrix, int r, int c)
{
    // Kiểm tra nếu kích thước ma trận không hợp lệ
    if (r <= 0 || c <= 0 || matrix == nullptr)
    {
        return nullptr;
    }

    // Cấp phát mảng các con trỏ cho các hàng của ma trận mới
    int **newMatrix = new (std::nothrow) int *[r];
    if (newMatrix == nullptr)
    {
        return nullptr;
    }

    // Cấp phát và sao chép từng hàng của ma trận
    for (int i = 0; i < r; i++)
    {
        // Cấp phát bộ nhớ cho hàng thứ i
        newMatrix[i] = new (std::nothrow) int[c];

        // Nếu cấp phát thất bại, giải phóng bộ nhớ đã cấp phát trước đó và trả về nullptr
        if (newMatrix[i] == nullptr)
        {
            // Giải phóng bộ nhớ đã được cấp phát cho các hàng trước đó
            for (int j = 0; j < i; j++)
            {
                delete[] newMatrix[j];
            }
            delete[] newMatrix;
            return nullptr;
        }

        // Sao chép dữ liệu từ ma trận gốc sang ma trận mới
        for (int j = 0; j < c; j++)
        {
            newMatrix[i][j] = matrix[i][j];
        }
    }

    return newMatrix;
}