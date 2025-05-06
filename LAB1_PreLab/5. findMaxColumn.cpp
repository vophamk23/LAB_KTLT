#include <iostream>
#include <limits.h> // Để sử dụng INT_MIN
using namespace std;
// Hàm tìm chỉ số của cột có tổng lớn nhất
int findMaxColumn(int arr[][1000], int row, int col)
{
    int maxSum = INT_MIN; // Khởi tạo tổng lớn nhất bằng giá trị nhỏ nhất có thể
    int maxColIndex = -1; // Khởi tạo chỉ số cột có tổng lớn nhất

    // Duyệt qua từng cột
    for (int j = 0; j < col; j++)
    {
        int currentSum = 0; // Khởi tạo tổng của cột hiện tại

        // Tính tổng các phần tử trong cột j
        for (int i = 0; i < row; i++)
        {
            currentSum += arr[i][j];
        }

        // Cập nhật cột có tổng lớn nhất
        // Lưu ý: Nếu có cùng tổng, chọn cột có chỉ số lớn hơn (>=)
        if (currentSum >= maxSum)
        {
            maxSum = currentSum;
            maxColIndex = j;
        }
    }

    return maxColIndex;
}