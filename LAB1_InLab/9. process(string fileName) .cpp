#include <limits>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Hàm xử lý file và tìm giá trị lớn nhất trong từng dòng và toàn cục
// Đầu vào: tên file chứa dữ liệu

// Đầu ra: in giá trị lớn nhất của từng dòng và giá trị lớn nhất toàn cục
// Ví dụ: nếu file chứa dữ liệu là:
// 3 4
// 1.2 3.4 5.6 7.8
// 9.0 2.1 4.5 6.7
// 8.9 0.1 2.3 4.5

void process(string fileName)
{
    // Mở file để đọc
    ifstream inputFile(fileName);

    // Kiểm tra xem file có mở thành công không
    if (!inputFile.is_open())
    {
        cout << "Không thể mở file!" << endl;
        return;
    }

    // Đọc giá trị N và M từ dòng đầu tiên
    int N, M;
    inputFile >> N >> M;

    // Khởi tạo biến lưu giá trị lớn nhất toàn cục
    double globalMax = -numeric_limits<double>::infinity();

    // Xử lý từng dòng
    for (int i = 0; i < N; i++)
    {
        // Khởi tạo biến lưu giá trị lớn nhất trong dòng hiện tại
        double rowMax = -numeric_limits<double>::infinity();

        // Đọc M số trong dòng hiện tại
        for (int j = 0; j < M; j++)
        {
            double value;
            inputFile >> value;

            // Cập nhật giá trị lớn nhất của dòng
            if (value > rowMax)
            {
                rowMax = value;
            }

            // Cập nhật giá trị lớn nhất toàn cục
            if (value > globalMax)
            {
                globalMax = value;
            }
        }

        // In giá trị lớn nhất của dòng hiện tại
        cout << rowMax << " ";
    }

    // In giá trị lớn nhất toàn cục
    cout << globalMax;

    // Đóng file
    inputFile.close();
}