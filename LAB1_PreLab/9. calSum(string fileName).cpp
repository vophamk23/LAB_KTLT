#include <iostream>
#include <fstream> // Để sử dụng ifstream
#include <string>  // Để sử dụng string
using namespace std;
/**
 * Hàm tính tổng các số nguyên trong file
 * @param fileName: tên file chứa các số nguyên
 */

void calSum(string fileName)
{
    // Mở file để đọc dữ liệu
    ifstream inputFile(fileName);

    // Kiểm tra xem file có mở thành công không
    if (!inputFile)
    {
        cout << "Không thể mở file " << fileName << endl;
        return;
    }

    // Biến để lưu tổng các số
    int sum = 0;

    // Biến để đọc từng số
    int num;

    // Đọc file cho đến khi hết
    while (inputFile >> num)
    {
        // Thêm số đã đọc vào tổng
        sum += num;
    }

    // Đóng file
    inputFile.close();

    // In ra tổng
    cout << sum;
}