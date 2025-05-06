/**
 * Hàm tính lũy thừa n^e bằng phương pháp đệ quy
 * @param n: Số nguyên cơ số
 * @param e: Số nguyên dương mũ
 * @return Giá trị n^e
 */
int calculate_power(int n, int e)
{
    // Trường hợp cơ sở: e = 0, kết quả là 1
    if (e == 0)
    {
        return 1;
    }

    // Trường hợp e = 1, kết quả là n
    if (e == 1)
    {
        return n;
    }

    // Trường hợp e là số chẵn: n^e = (n^(e/2))^2
    if (e % 2 == 0)
    {
        int half_power = calculate_power(n, e / 2);
        return half_power * half_power;
    }
    // Trường hợp e là số lẻ: n^e = n * n^(e-1)
    else
    {
        return n * calculate_power(n, e - 1);
    }
}