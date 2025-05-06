#include <iostream>
#include <string>

using namespace std;
// Function to delete all occurrences of s1 in s
// If s1 is not found in s, the string remains unchanged
void deleteWord(string s, string s1)
{
    size_t position = 0;

    // Tìm và xóa tất cả các chuỗi s1 trong s
    while ((position = s.find(s1, position)) != std::string::npos)
    {
        // Xóa chuỗi s1 tại vị trí đã tìm thấy
        s.erase(position, s1.length());
        // Không cần tăng position vì sau khi xóa, position đã trỏ đến ký tự kế tiếp
    }

    // In ra chuỗi kết quả sau khi xóa
    cout << s << endl;
}
/*
int main() {
    // Ví dụ minh họa
    deleteWord("Hello world Hello", "Hello");     // Output: " world "
    deleteWord("abc abc abc", "abc");             // Output: "  "
    deleteWord("Testing", "not found");           // Output: "Testing"
    deleteWord("banana", "ana");                  // Output: "bn"
    deleteWord("aaaaa", "a");                     // Output: ""

    return 0;
}
*/