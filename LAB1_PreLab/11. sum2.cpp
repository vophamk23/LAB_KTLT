void sum2(int *array, int size, int &result)
{
    // Khởi tạo biến result bằng 0
    result = 0;

    // Duyệt qua từng phần tử trong mảng và cộng dồn vào result
    for (int i = 0; i < size; i++)
    {
        result += array[i];
    }
}