#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Hàm chuyển đổi tất cả các ký tự thường thành chữ HOA trong chuỗi S
// Đầu vào: chuỗi S từ bàn phím
// Đầu ra: ghi chuỗi đã chuyển đổi vào file output.txt
// Ví dụ: nếu S = "Hello World", thì file output.txt sẽ chứa "HELLO WORLD"

void uppercase(string output)
{
    // Đọc chuỗi S từ bàn phím
    string S;
    getline(cin, S);

    // Chuyển các ký tự thường thành HOA
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            // Chỉ chuyển đổi chữ cái thường
            S[i] = S[i] - 'a' + 'A';
        }
        // Các ký tự khác giữ nguyên
    }

    // Mở file để ghi kết quả - sử dụng đường dẫn đầy đủ từ tham số
    ofstream outFile;
    outFile.open(output.c_str());

    // Ghi chuỗi đã xử lý vào file
    outFile << S;

    // Đóng file
    outFile.close();
}