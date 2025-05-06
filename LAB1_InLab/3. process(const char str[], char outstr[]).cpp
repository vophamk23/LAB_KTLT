// Loại bỏ các khoảng trắng thừa trong chuỗi sao cho không còn hai khoảng trắng liền kề nhau và không có khoảng trắng nào ở đầu và cuối chuỗi

// Đầu vào: chuỗi str[]
// Đầu ra: chuỗi outstr[]
// Ví dụ: str[] = "  Hello   World  " => outstr[] = "Hello World"
// Ví dụ: str[] = "  Hello   World  " => outstr[] = "Hello World"
void process(const char str[], char outstr[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    int i = 0; // Chỉ số trong chuỗi gốc
    int j = 0; // Chỉ số trong chuỗi kết quả

    // Bỏ qua khoảng trắng ở đầu chuỗi
    while (i < len && str[i] == ' ')
    {
        i++;
    }

    bool prevSpace = false; // Biến kiểm tra ký tự trước có phải là khoảng trắng không

    // Xử lý chuỗi
    while (i < len)
    {
        if (str[i] == ' ')
        {
            if (!prevSpace)
            {
                // Nếu đây là khoảng trắng đầu tiên, thêm vào kết quả
                outstr[j++] = ' ';
                prevSpace = true;
            }
            // Bỏ qua các khoảng trắng liên tiếp
        }
        else
        {

            // Thêm ký tự không phải khoảng trắng vào kết quả
            outstr[j++] = str[i];
            prevSpace = false;
        }
        i++;
    }

    // Xóa khoảng trắng ở cuối chuỗi (nếu có)
    if (j > 0 && outstr[j - 1] == ' ')
    {
        j--;
    }

    // Thêm ký tự kết thúc chuỗi
    outstr[j] = '\0';
}