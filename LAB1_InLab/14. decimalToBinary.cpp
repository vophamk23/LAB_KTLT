long int decimalToBinary(int decimal_number)
{
    // Trường hợp cơ bản: nếu số thập phân là 0 hoặc 1
    if (decimal_number == 0)
    {
        return 0;
    }
    if (decimal_number == 1)
    {
        return 1;
    }

    // Công thức đệ quy: chuyển đổi phần còn lại và thêm chữ số cuối cùng
    // Ý tưởng: decimal_number % 2 là bit cuối cùng của số nhị phân
    // decimal_number / 2 là phần còn lại cần chuyển đổi
    return decimalToBinary(decimal_number / 2) * 10 + (decimal_number % 2);
}
