/**
 * Tìm ước chung lớn nhất (GCD) của hai số bằng phương pháp đệ quy
 * Sử dụng thuật toán Euclid: gcd(p, q) = gcd(q, p % q)
 * @param p Số nguyên dương thứ nhất
 * @param q Số nguyên dương thứ hai
 * @return Ước chung lớn nhất của p và q
 */
int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // Trường hợp cơ sở: nếu q = 0, ước chung lớn nhất là p
    if (q == 0)
    {
        return p;
    }

    // Gọi đệ quy với tham số q và p % q
    return gcdRecursion(q, p % q);
    // END YOUR IMPLEMENTATION [1]
}

/**
 * Tìm ước chung lớn nhất (GCD) của hai số bằng phương pháp vòng lặp
 * Sử dụng thuật toán Euclid: gcd(p, q) = gcd(q, p % q)
 * @param p Số nguyên dương thứ nhất
 * @param q Số nguyên dương thứ hai
 * @return Ước chung lớn nhất của p và q
 */
int gcdIteration(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // Tránh trường hợp p = 0 hoặc q = 0
    if (p == 0)
        return q;
    if (q == 0)
        return p;

    // Vòng lặp thực hiện thuật toán Euclid
    while (q != 0)
    {
        // Lưu giá trị hiện tại của q
        int temp = q;
        // Cập nhật q = p % q
        q = p % q;
        // Cập nhật p = temp
        p = temp;
    }

    // Kết quả là giá trị p sau khi kết thúc vòng lặp
    return p;
    // END YOUR IMPLEMENTATION [2]
}