bool completeNum(int N)
{
    // Nếu N <= 1, không phải số hoàn thiện
    if (N <= 1)
    {
        return false;
    }

    // Biến lưu tổng các ước số
    int sum = 1; // Bắt đầu từ 1 vì 1 luôn là ước số của mọi số nguyên dương

    // Duyệt từ 2 đến căn bậc hai của N để tìm ước số
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            // Nếu i là ước số của N
            sum += i;

            // Nếu i khác với N/i (để tránh cộng hai lần trong trường hợp N là số chính phương)
            if (i != N / i)
            {
                sum += N / i;
            }
        }
    }

    // Kiểm tra xem tổng các ước số có bằng N không
    return sum == N;
}