// Hàm kiểm tra ma trận đối xứng
bool isSymmetric(int arr[][1000], int row, int col)
{
    // Điều kiện cần để ma trận đối xứng là kích thước ma trận phải là vuông
    if (row != col)
    {
        return false;
    }

    // Kiểm tra tính đối xứng: arr[i][j] = arr[j][i] với mọi i, j
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                return false; // Nếu có một cặp không đối xứng, trả về false
            }
        }
    }

    // Nếu tất cả các cặp đều đối xứng, trả về true
    return true;
}