// Hàm đệ quy để chuyển đổi số thập phân sang nhị phân
// Không sử dụng từ khóa cấm: for, while, goto
// Hàm phụ trợ đệ quy để xây dựng số nhị phân
long int decimalToBinary(int decimal_number)
{
    // Trường hợp cơ bản
    if (decimal_number == 0)
    {
        return 0;
    }

    // Đệ quy và xây dựng số nhị phân
    return (decimal_number % 2) + 10 * decimalToBinary(decimal_number / 2);
}
/*
// Hàm main để kiểm tra
int main() {
    // Kiểm tra với giá trị 20
    cout << decimalToBinary(20) << endl; // Kết quả: 10100

    // Một số trường hợp kiểm tra khác
    cout << decimalToBinary(10) << endl; // Kết quả: 1010
    cout << decimalToBinary(42) << endl; // Kết quả: 101010

    return 0;
}
*/