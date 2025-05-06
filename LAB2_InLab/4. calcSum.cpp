int calcSum(int *ptr, int n)
{
    int sum = 0;
    int *endPtr = ptr + n; // Con trỏ chỉ vị trí sau phần tử cuối cùng

    while (ptr < endPtr)
    {
        sum += *ptr; // Cộng giá trị tại vị trí ptr vào tổng
        ptr++;       // Di chuyển con trỏ đến phần tử tiếp theo
    }

    return sum;
}