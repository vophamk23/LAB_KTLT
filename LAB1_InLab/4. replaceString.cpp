#include <iostream>
#include <string>
using namespace std;
// Function to replace the last occurrence of s1 in s with s2
// If s1 is not found in s, the string remains unchanged
void replaceString(string s, string s1, string s2)
{
    // Tìm vị trí xuất hiện cuối cùng của chuỗi s1 trong s
    size_t position = s.rfind(s1);

    // Nếu tìm thấy s1 trong s
    if (position != std::string::npos)
    {
        // Thay thế chuỗi s1 ở vị trí position bằng chuỗi s2
        s.replace(position, s1.length(), s2);
    }

    // In ra chuỗi kết quả
    cout << s << endl;
}
/*
int main() {
    // Ví dụ minh họa
    replaceString("Hello world Hello", "Hello", "Hi");  // Output: Hello world Hi
    replaceString("abc abc abc", "abc", "xyz");         // Output: abc abc xyz
    replaceString("Testing", "not found", "replace");   // Output: Testing

    return 0;
}
*/