#include <iostream>
#include <cstring>
using namespace std;

// In ra từ đầu tiên trong chuỗi bị lặp
// Nếu không có từ nào bị lặp lại, in ra "No Repetition"
// Ví dụ: "hello world hello" -> "hello"
void printFirstRepeatedWord(char str[])
{
    // Mảng để lưu các từ đã gặp
    char words[1000][31]; // Mỗi từ tối đa 30 ký tự + 1 ký tự kết thúc chuỗi
    int wordCount = 0;

    // Biến lưu trữ từ hiện tại đang xét
    char currentWord[31];
    int currentLength = 0;

    // Duyệt qua từng ký tự trong chuỗi đầu vào
    int i = 0;
    while (str[i] != '\0')
    {
        // Nếu là khoảng trắng hoặc dấu xuống dòng hoặc hết chuỗi
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0')
        {
            // Kết thúc từ hiện tại nếu có
            if (currentLength > 0)
            {
                // Thêm ký tự kết thúc chuỗi
                currentWord[currentLength] = '\0';

                // Kiểm tra xem từ hiện tại có xuất hiện trước đó chưa
                for (int j = 0; j < wordCount; j++)
                {
                    // So sánh từng ký tự của hai từ
                    int k = 0;
                    while (words[j][k] != '\0' && currentWord[k] != '\0' && words[j][k] == currentWord[k])
                    {
                        k++;
                    }

                    // Nếu cả hai từ đều kết thúc cùng lúc, tức là hai từ giống nhau
                    if (words[j][k] == '\0' && currentWord[k] == '\0')
                    {
                        // In ra từ bị lặp lại và kết thúc hàm
                        for (int l = 0; currentWord[l] != '\0'; l++)
                        {
                            cout << currentWord[l];
                        }
                        return;
                    }
                }

                // Nếu từ chưa xuất hiện trước đó, thêm vào danh sách các từ đã gặp
                for (int j = 0; j <= currentLength; j++)
                {
                    words[wordCount][j] = currentWord[j];
                }
                wordCount++;

                // Reset cho từ mới
                currentLength = 0;
            }
        }
        // Nếu là ký tự thường (không phải khoảng trắng)
        else
        {
            // Thêm ký tự vào từ hiện tại
            currentWord[currentLength] = str[i];
            currentLength++;
        }

        // Chuyển đến ký tự tiếp theo
        i++;
    }

    // Xử lý từ cuối cùng (nếu chuỗi không kết thúc bằng khoảng trắng)
    if (currentLength > 0)
    {
        // Thêm ký tự kết thúc chuỗi
        currentWord[currentLength] = '\0';

        // Kiểm tra xem từ hiện tại có xuất hiện trước đó chưa
        for (int j = 0; j < wordCount; j++)
        {
            // So sánh từng ký tự của hai từ
            int k = 0;
            while (words[j][k] != '\0' && currentWord[k] != '\0' && words[j][k] == currentWord[k])
            {
                k++;
            }

            // Nếu cả hai từ đều kết thúc cùng lúc, tức là hai từ giống nhau
            if (words[j][k] == '\0' && currentWord[k] == '\0')
            {
                // In ra từ bị lặp lại và kết thúc hàm
                for (int l = 0; currentWord[l] != '\0'; l++)
                {
                    cout << currentWord[l];
                }
                return;
            }
        }
    }

    // Nếu không tìm thấy từ nào bị lặp lại
    cout << "No Repetition";
}