/**
 * Hàm tính độ dài của chuỗi sử dụng đệ quy
 * @param str Con trỏ đến chuỗi cần tính độ dài
 * @return Độ dài của chuỗi
 */
int strLen(char *str)
{
    // Trường hợp cơ sở: nếu gặp ký tự kết thúc chuỗi '\0'
    if (*str == '\0')
    {
        return 0;
    }

    // Trường hợp đệ quy: tính độ dài của phần chuỗi còn lại và cộng thêm 1
    return 1 + strLen(str + 1);
}