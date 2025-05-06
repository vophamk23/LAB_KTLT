/**
 * Hàm trả về giá trị tại vị trí k trong mảng thông qua con trỏ
 * @param ptr Con trỏ đến phần tử đầu tiên của mảng
 * @param k Vị trí cần truy xuất (từ 0 đến size-1)
 * @return Giá trị tại vị trí k trong mảng
 */
int getValueAtIndex(int *ptr, int k)
{
    // Truy cập phần tử tại vị trí k thông qua cú pháp con trỏ
    return *(ptr + k);

    // Hoặc có thể viết theo dạng chỉ mục mảng:
    // return ptr[k];
}
// Hoặc có thể viết theo dạng con trỏ:
// return *ptr + k;
// Hoặc có thể viết theo dạng con trỏ:
// return *(ptr + k);