#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int num)
{
    // Trường hợp đặc biệt
    if (num <= 1)
    {
        return false;
    }
    if (num <= 3)
    {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }

    // Kiểm tra các số từ 5 đến căn bậc hai của num
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

// Hàm đếm số cột có tổng là số nguyên tố
int primeColumns(int arr[][1000], int row, int col)
{
    int count = 0; // Biến đếm số cột HN2

    // Duyệt qua từng cột trong mảng
    for (int j = 0; j < col; j++)
    {
        int sum = 0; // Biến lưu tổng các phần tử trong cột

        // Tính tổng các phần tử trong cột j
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }

        // Kiểm tra xem tổng có phải số nguyên tố không
        if (isPrime(sum))
        {
            count++; // Nếu đúng, tăng biến đếm
        }
    }

    return count;
}