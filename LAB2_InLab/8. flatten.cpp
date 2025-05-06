int *flatten(int **matrix, int r, int c)
{
    // Cấp phát mảng một chiều mới có kích thước r*c
    int *result = new int[r * c];

    // Biến đếm để theo dõi vị trí trong mảng result
    int index = 0;

    // Duyệt qua từng phần tử của ma trận hai chiều
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // Sao chép phần tử từ ma trận vào mảng result
            result[index] = matrix[i][j];
            index++;
        }
    }

    // Trả về con trỏ đến mảng đã được làm phẳng
    return result;
}