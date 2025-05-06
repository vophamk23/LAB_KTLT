// Đảo ngược chuỗi ký tự
void reverse(char str[])
{
    // Tìm độ dài chuỗi
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    // Đảo ngược chuỗi
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}