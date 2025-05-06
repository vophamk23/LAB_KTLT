
#include <iostream>
#include <cstdlib> // Để sử dụng abs
using namespace std;

/**
 * Hàm tính hiệu giá trị tuyệt đối giữa tổng hai đường chéo đi qua điểm (x,y)
 * @param arr: mảng 2 chiều chứa các số nguyên
 * @param row: số hàng của mảng
 * @param col: số cột của mảng
 * @param x: chỉ số hàng của ô cần xét
 * @param y: chỉ số cột của ô cần xét
 * @return: giá trị tuyệt đối của hiệu giữa tổng hai đường chéo
 */
int diagonalDiff(int arr[][1000], int row, int col, int x, int y)
{
    // Tính tổng của đường chéo chính (từ trái trên xuống phải dưới)
    int mainDiagonalSum = 0;
    int r = x, c = y;

    // Di chuyển lên trái để tìm điểm bắt đầu của đường chéo chính
    // Tiếp tục di chuyển cho đến khi gặp biên trên hoặc biên trái của ma trận
    while (r > 0 && c > 0)
    {
        r--;
        c--;
    }

    // Từ điểm bắt đầu, duyệt và tính tổng toàn bộ đường chéo
    // Dừng lại khi gặp biên dưới hoặc biên phải của ma trận
    while (r < row && c < col)
    {
        mainDiagonalSum += arr[r][c];
        r++;
        c++;
    }

    // Tính tổng của đường chéo phụ (từ phải trên xuống trái dưới)
    int antiDiagonalSum = 0;
    r = x; // Reset về vị trí ban đầu
    c = y;

    // Di chuyển lên phải để tìm điểm bắt đầu của đường chéo phụ
    // Tiếp tục di chuyển cho đến khi gặp biên trên hoặc biên phải của ma trận
    while (r > 0 && c < col - 1)
    {
        r--;
        c++;
    }

    // Từ điểm bắt đầu, duyệt và tính tổng toàn bộ đường chéo phụ
    // Dừng lại khi gặp biên dưới hoặc biên trái của ma trận
    while (r < row && c >= 0)
    {
        antiDiagonalSum += arr[r][c];
        r++;
        c--;
    }

    // Trả về giá trị tuyệt đối của hiệu giữa hai tổng
    return abs(mainDiagonalSum - antiDiagonalSum);
}