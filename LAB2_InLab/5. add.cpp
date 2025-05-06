void add(int *ptr, int n, int k)
{
    // Di chuyển con trỏ đến vị trí cuối mảng (vị trí thứ n)
    ptr = ptr + n;

    // Gán giá trị k vào vị trí cuối mảng
    *ptr = k;
}