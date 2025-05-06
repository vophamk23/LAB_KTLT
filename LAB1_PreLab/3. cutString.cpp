#include <iostream>
#include <string>
using namespace std;

void cutString(string s, int index)
{
    // Kiểm tra index có hợp lệ không
    if (index >= 0 && index < s.length())
    {
        // Sử dụng hàm substr để lấy chuỗi con từ vị trí index đến hết
        string result = s.substr(index);
        // In ra chuỗi con
        cout << result;
    }
    // Nếu index không hợp lệ, không in ra gì cả
}