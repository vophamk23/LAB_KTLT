// Tìm vị trí của chuỗi con trong một chuỗi cho trướ
// Hàm này sẽ trả về vị trí đầu tiên của chuỗi con trong chuỗi ban đầu, hoặc -1 nếu không tìm thấy
// Tìm kiếm chuỗi con trong chuỗi ban đầu
// Nếu chuỗi con rỗng hoặc dài hơn chuỗi ban đầu, không thể tìm thấy
// Nếu chuỗi con không tìm thấy trong chuỗi ban đầu, trả về -1
int find(char str[], char substr[])
{
    // Tính độ dài của chuỗi ban đầu và chuỗi con
    int strLen = 0;
    while (str[strLen] != '\0')
    {
        strLen++;
    }

    int substrLen = 0;
    while (substr[substrLen] != '\0')
    {
        substrLen++;
    }

    // Nếu chuỗi con rỗng hoặc dài hơn chuỗi ban đầu, không thể tìm thấy
    if (substrLen == 0 || substrLen > strLen)
    {
        return -1;
    }

    // Duyệt qua chuỗi ban đầu để tìm vị trí chuỗi con
    for (int i = 0; i <= strLen - substrLen; i++)
    {
        int j;

        // Kiểm tra từng ký tự của chuỗi con với chuỗi ban đầu bắt đầu từ vị trí i
        for (j = 0; j < substrLen; j++)
        {
            if (str[i + j] != substr[j])
            {
                break; // Nếu có ký tự không khớp, thoát vòng lặp
            }
        }

        // Nếu j bằng độ dài chuỗi con, tức là đã tìm thấy chuỗi con
        if (j == substrLen)
        {
            return i; // Trả về vị trí bắt đầu
        }
    }

    // Không tìm thấy chuỗi con trong chuỗi ban đầu
    return -1;
}