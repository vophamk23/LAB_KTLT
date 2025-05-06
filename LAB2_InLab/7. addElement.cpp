void addElement(int *&arr, int n, int val, int index)
{
    // Cấp phát mảng mới có n+1 phần tử
    int *newArr = new int[n + 1];

    // Sao chép các phần tử từ vị trí 0 đến index-1 vào mảng mới
    for (int i = 0; i < index; i++)
    {
        newArr[i] = arr[i];
    }

    // Chèn giá trị val vào vị trí index
    newArr[index] = val;

    // Sao chép các phần tử còn lại từ vị trí index đến n-1 của mảng cũ
    // vào vị trí index+1 đến n của mảng mới
    for (int i = index; i < n; i++)
    {
        newArr[i + 1] = arr[i];
    }

    // Giải phóng bộ nhớ của mảng cũ
    delete[] arr;

    // Cập nhật con trỏ arr để trỏ đến mảng mới
    arr = newArr;
}