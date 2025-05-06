void deleteMatrix(int **&matrix, int r)
{
    // Kiểm tra nếu matrix là nullptr hoặc r <= 0, không cần giải phóng
    if (matrix == nullptr || r <= 0)
    {
        // Đảm bảo matrix được đặt thành nullptr trước khi kết thúc
        matrix = nullptr;
        return;
    }

    // Giải phóng từng hàng của ma trận
    for (int i = 0; i < r; i++)
    {
        // Trước khi giải phóng, kiểm tra xem con trỏ hàng có tồn tại không
        if (matrix[i] != nullptr)
        {
            delete[] matrix[i];
        }
    }

    // Giải phóng mảng các con trỏ hàng
    delete[] matrix;

    // Đặt matrix thành nullptr để tránh dangling pointer
    matrix = nullptr;
}