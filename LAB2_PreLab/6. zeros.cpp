#include <iostream>
#include <new> // std::nothrow
using namespace std;
// Hàm zeros nhận vào một số nguyên dương n và trả về một con trỏ đến mảng động chứa n số nguyên, tất cả đều bằng 0.

int *zeros(int n)
{
    // Kiểm tra nếu n không hợp lệ (n <= 0), trả về nullptr
    if (n <= 0)
    {
        return nullptr;
    }

    // Cấp phát động một mảng n phần tử kiểu int
    // Sử dụng std::nothrow để tránh ném ngoại lệ khi cấp phát thất bại
    int *arr = new (std::nothrow) int[n];

    // Kiểm tra xem việc cấp phát có thành công không
    // Nếu thất bại (arr == nullptr), trả về nullptr
    if (arr == nullptr)
    {
        return nullptr;
    }

    // Khởi tạo tất cả phần tử của mảng bằng 0
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    // Trả về con trỏ trỏ đến mảng đã được cấp phát và khởi tạo
    return arr;

    // Lưu ý: Người sử dụng hàm này cần phải giải phóng bộ nhớ bằng delete[] arr
    // sau khi sử dụng xong để tránh rò rỉ bộ nhớ
}