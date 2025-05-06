#include <iostream>
#include <new> // std::nothrow
using namespace std;

// Hàm insertRow nhận vào một ma trận (mảng 2 chiều), kích thước của nó (r hàng, c cột),
void insertRow(int **&matrix, int r, int c, int *rowArr, int row)
{
    // Kiểm tra các điều kiện đầu vào
    if (matrix == nullptr || rowArr == nullptr || row < 0 || row > r)
    {
        return; // Không thực hiện thao tác nếu điều kiện không hợp lệ
    }

    // Cấp phát ma trận mới với (r+1) hàng và c cột
    int **newMatrix = new (std::nothrow) int *[r + 1];
    if (newMatrix == nullptr)
    {
        return; // Nếu không thể cấp phát bộ nhớ, thoát hàm
    }

    // Sao chép các hàng từ ma trận cũ tới ma trận mới
    // và chèn rowArr vào vị trí row
    for (int i = 0; i <= r; i++)
    {
        if (i == row)
        {
            // Chèn rowArr tại vị trí row
            newMatrix[i] = new (std::nothrow) int[c];
            if (newMatrix[i] == nullptr)
            {
                // Nếu cấp phát thất bại, giải phóng bộ nhớ đã cấp phát và thoát
                for (int j = 0; j < i; j++)
                {
                    delete[] newMatrix[j];
                }
                delete[] newMatrix;
                return;
            }

            // Sao chép dữ liệu từ rowArr vào hàng mới
            for (int j = 0; j < c; j++)
            {
                newMatrix[i][j] = rowArr[j];
            }
        }
        else if (i < row)
        {
            // Sao chép các hàng trước vị trí chèn
            newMatrix[i] = matrix[i];
        }
        else
        {
            // Sao chép các hàng sau vị trí chèn (dịch xuống 1 hàng)
            newMatrix[i] = matrix[i - 1];
        }
    }

    // Giải phóng mảng con trỏ cũ, nhưng giữ lại các hàng vì đã được chuyển sang ma trận mới
    delete[] matrix;

    // Cập nhật matrix để trỏ đến ma trận mới
    matrix = newMatrix;
}