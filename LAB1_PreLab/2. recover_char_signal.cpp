// Hàm khôi phục tín hiệu bị tấn công
void recover(char signal[])
{
    int i = 0;

    // Duyệt qua từng ký tự trong chuỗi
    while (signal[i] != '\0')
    {
        // Kiểm tra nếu là chữ in hoa (A-Z)
        if (signal[i] >= 'A' && signal[i] <= 'Z')
        {
            // Chuyển in hoa thành chữ thường
            signal[i] = signal[i] + ('a' - 'A');
        }
        // Kiểm tra nếu là chữ thường (a-z)
        else if (signal[i] >= 'a' && signal[i] <= 'z')
        {
            // Chuyển chữ thường thành in hoa
            signal[i] = signal[i] - ('a' - 'A');
        }
        // Các ký tự khác giữ nguyên

        i++; // Chuyển đến ký tự tiếp theo
    }
}