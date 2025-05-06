int recursiveSum(int arr[], int size)
{
    // Trường hợp cơ sở: nếu mảng rỗng, trả về 0
    if (size <= 0)
    {
        return 0;
    }

    // Trường hợp đệ quy: trả về phần tử cuối cùng + tổng các phần tử còn lại
    return arr[size - 1] + recursiveSum(arr, size - 1);
}