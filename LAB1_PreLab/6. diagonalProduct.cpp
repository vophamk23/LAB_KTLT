#include <iostream>
#include <algorithm> // Để sử dụng hàm min
using namespace std;

// Hàm tính tích các phần tử trên đường chéo chính
int diagonalProduct(int arr[][1000], int row, int col)
{
    // Khởi tạo biến tích bằng 1
    int product = 1;

    // Duyệt qua các phần tử trên đường chéo chính
    // Đường chéo chính có các phần tử nằm ở vị trí (i,i)
    int size = min(row, col); // Đảm bảo không vượt quá kích thước mảng

    for (int i = 0; i < size; i++)
    {
        // Nhân tích với phần tử hiện tại
        product *= arr[i][i];
    }

    return product;
}