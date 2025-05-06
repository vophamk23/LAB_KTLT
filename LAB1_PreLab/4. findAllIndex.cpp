#include <iostream>
#include <string>
using namespace std;

void findAllIndex(string s1, string s2)
{
    // Kiểm tra s2 có rỗng không
    if (s2.empty())
    {
        cout << -1;
        return;
    }

    // Lấy ký tự đầu tiên của chuỗi s2
    char firstChar = s2[0];

    // Biến để theo dõi vị trí tìm kiếm hiện tại
    size_t pos = 0;
    // Biến kiểm tra đã tìm thấy kết quả nào chưa
    bool found = false;

    // Tìm tất cả các vị trí xuất hiện của ký tự đầu tiên
    while (pos < s1.length())
    {
        // Tìm vị trí tiếp theo của firstChar trong s1, bắt đầu từ pos
        pos = s1.find(firstChar, pos);

        // Nếu không tìm thấy, thoát khỏi vòng lặp
        if (pos == string::npos)
        {
            break;
        }

        // In ra vị trí tìm thấy
        if (found)
        {
            cout << " ";
        }
        cout << pos;
        found = true;

        // Di chuyển đến vị trí tiếp theo
        pos++;
    }

    // Nếu không tìm thấy kết quả nào
    if (!found)
    {
        cout << -1;
    }
}