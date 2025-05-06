#include <iostream>
#include <string>
#include <algorithm> // for std::reverse
#include <cctype>    // for std::tolower
using namespace std;

// Function to check if a string is a palindrome using iterative method
// This function checks if a string is a palindrome by comparing it with its reverse.
// It ignores case and non-alphanumeric characters.
// A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).
// For example

void hiddenCheck()
{
    // This function is used to check if the code is running correctly.

    // It does not contain any implementation and is just a placeholder.
    // You can add your own implementation here if needed.
}

bool palindrome(string s)
{
    // BEGIN YOUR IMPLEMENTATION [0]
    // Chuyển đổi tất cả ký tự thành chữ thường
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // Xóa các ký tự không phải chữ cái và số
    s.erase(remove_if(s.begin(), s.end(), [](char c)
                      { return !isalnum(c); }),
            s.end());

    // So sánh chuỗi với chuỗi đảo ngược của nó
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return (s == reversed);
    // END YOUR IMPLEMENTATION [0]
}

// Function to check if a string is a palindrome using iterative method
bool palindromeRecursion(string s)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // Trường hợp cơ sở: chuỗi rỗng hoặc có 1 ký tự là palindrome
    int len = s.length();
    if (len <= 1)
    {
        return true;
    }

    // Nếu ký tự đầu và cuối không giống nhau, không phải palindrome
    if (s[0] != s[len - 1])
    {
        return false;
    }

    // Kiểm tra đệ quy trên chuỗi con không bao gồm ký tự đầu và cuối
    return palindromeRecursion(s.substr(1, len - 2));
    // END YOUR IMPLEMENTATION [1]
}

int main()
{
    hiddenCheck();
    // BEGIN YOUR IMPLEMENTATION [2]
    string s;

    // Vòng lặp đọc chuỗi và kiểm tra cho đến khi nhập chuỗi bắt đầu bằng '*'
    while (true)
    {
        getline(cin, s);

        // Điều kiện dừng: chuỗi bắt đầu bằng '*'
        if (s[0] == '*')
        {
            break;
        }

        // Kiểm tra và in kết quả của cả hai hàm
        bool result1 = palindrome(s);
        bool result2 = palindromeRecursion(s);

        // In kết quả theo định dạng yêu cầu
        cout << (result1 ? "true" : "false") << " "
             << (result2 ? "true" : "false") << endl;
    }
    // END YOUR IMPLEMENTATION [2]
    return 0;
}