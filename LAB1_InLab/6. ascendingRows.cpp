#include <iostream>
using namespace std;
// Function to count the number of rows in a 2D array that are strictly increasing (HN1)
// A row is considered strictly increasing if each element is less than the next one
// arr: 2D array of integers
int ascendingRows(int arr[][1000], int row, int col)
{
    int count = 0; // Biến đếm số hàng là HN1

    // Duyệt qua từng hàng trong mảng
    for (int i = 0; i < row; i++)
    {
        bool isAscending = true; // Giả định hàng hiện tại là HN1

        // Kiểm tra xem hàng hiện tại có phải HN1 không
        for (int j = 0; j < col - 1; j++)
        {
            // Nếu phần tử hiện tại lớn hơn phần tử tiếp theo
            // thì hàng này không phải là HN1
            if (arr[i][j] > arr[i][j + 1])
            {
                isAscending = false;
                break; // Thoát vòng lặp bên trong
            }
        }

        // Nếu hàng là HN1, tăng biến đếm
        if (isAscending)
        {
            count++;
        }
    }

    return count;
}