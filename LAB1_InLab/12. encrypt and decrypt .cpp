#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * Mã hóa một chuỗi ký tự theo phương pháp Caesar Cipher
 * @param text Chuỗi ký tự cần mã hóa (chỉ chữ cái thường và hoa)
 * @param shift Giá trị dịch chuyển (số nguyên)
 */
void encrypt(char *text, int shift)
{
    int len = strlen(text);

    // Đảm bảo shift nằm trong khoảng [0, 25]
    shift = shift % 26;
    if (shift < 0)
    {
        shift += 26;
    }

    for (int i = 0; i < len; i++)
    {
        // Chỉ xử lý chữ cái
        if (isalpha(text[i]))
        {
            // Xử lý chữ cái hoa
            if (isupper(text[i]))
            {
                text[i] = 'A' + (text[i] - 'A' + shift) % 26;
            }
            // Xử lý chữ cái thường
            else
            {
                text[i] = 'a' + (text[i] - 'a' + shift) % 26;
            }
        }
        // Các ký tự khác giữ nguyên
    }
}

/*
 * Giải mã một chuỗi ký tự đã được mã hóa theo phương pháp Caesar Cipher
 * @param text Chuỗi ký tự cần giải mã (chỉ chữ cái thường và hoa)
 * @param shift Giá trị dịch chuyển (số nguyên)
 */
void decrypt(char *text, int shift)
{
    // Giải mã chính là mã hóa với giá trị shift ngược lại
    // Ví dụ: Mã hóa với shift = 3, thì giải mã là mã hóa với shift = -3 hoặc 23
    encrypt(text, -shift);
}