char *concatStr(char *str1, char *str2)
{
    // Tính độ dài của hai chuỗi
    int len1 = 0;
    int len2 = 0;

    // Tính độ dài của chuỗi str1
    while (str1[len1] != '\0')
    {
        len1++;
    }

    // Tính độ dài của chuỗi str2
    while (str2[len2] != '\0')
    {
        len2++;
    }

    // Cấp phát bộ nhớ cho chuỗi kết quả (len1 + len2 + 1 cho ký tự null)
    char *result = new char[len1 + len2 + 1];

    // Sao chép chuỗi str1 vào result
    for (int i = 0; i < len1; i++)
    {
        result[i] = str1[i];
    }

    // Sao chép chuỗi str2 vào sau str1 trong result
    for (int i = 0; i < len2; i++)
    {
        result[len1 + i] = str2[i];
    }

    // Thêm ký tự kết thúc chuỗi
    result[len1 + len2] = '\0';

    return result;
}