#include <math.h>
#include <iostream>
using namespace std;
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/*
 * Kiểm tra một số có phải là số nguyên tố hay không
 * @param n Số cần kiểm tra
 * @return true nếu n là số nguyên tố, ngược lại false
 */
bool isPrime(int n)
{
    // Các trường hợp đặc biệt
    if (n <= 1)
    {
        return false; // 0 và 1 không phải là số nguyên tố
    }
    if (n <= 3)
    {
        return true; // 2 và 3 là số nguyên tố
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false; // Chia hết cho 2 hoặc 3 không phải số nguyên tố
    }

    // Kiểm tra các ước số từ 5 đến căn bậc hai của n
    // Sử dụng phương pháp tối ưu 6k±1
    int sqrtN = (int)sqrt(n);
    for (int i = 5; i <= sqrtN; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

/*
 * Tính tổng các chữ số của một số
 * @param n Số cần tính tổng chữ số
 * @return Tổng các chữ số của n
 */
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10; // Lấy chữ số cuối cùng
        n /= 10;       // Bỏ chữ số cuối cùng
    }
    return sum;
}

/*
 * Kiểm tra một số có phải là số đặc biệt hay không
 * Số đặc biệt là số nguyên tố và tổng các chữ số của nó cũng là số nguyên tố
 *
 * @param n Số cần kiểm tra
 * @return true nếu n là số đặc biệt, ngược lại false
 */
bool isSpecialNumber(int n)
{
    // Kiểm tra n có phải số nguyên tố không
    if (!isPrime(n))
    {
        return false;
    }

    // Tính tổng các chữ số của n
    int sum = sumOfDigits(n);

    // Kiểm tra tổng các chữ số có phải số nguyên tố không
    return isPrime(sum);
}