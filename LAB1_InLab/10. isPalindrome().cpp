#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <iostream>

/**
 * Kiểm tra xem một chuỗi có phải là palindrome hay không
 *
 * @param str Chuỗi cần kiểm tra, chỉ bao gồm chữ cái thường
 * @return true nếu chuỗi là palindrome, ngược lại false
 */
bool isPalindrome(const char *str)
{
    // Nếu chuỗi là NULL, không phải palindrome
    if (str == NULL)
    {
        return false;
    }

    int length = strlen(str);

    // Duyệt từ hai đầu vào giữa
    for (int i = 0; i < length / 2; i++)
    {
        // Nếu có bất kỳ cặp ký tự nào không trùng nhau
        if (str[i] != str[length - 1 - i])
        {
            return false;
        }
    }

    // Nếu tất cả các cặp ký tự đều trùng nhau
    return true;
}