void shallowCopy(int *&newArr, int *&arr)
{
    // Chỉ cần gán con trỏ newArr bằng con trỏ arr
    // Điều này làm cho cả hai con trỏ cùng trỏ đến cùng một vùng nhớ
    newArr = arr;

    // Lưu ý: Đây là shallow copy (sao chép nông)
    // Cả hai con trỏ newArr và arr đều trỏ đến cùng một mảng dữ liệu
    // Thay đổi dữ liệu thông qua một con trỏ sẽ ảnh hưởng đến con trỏ còn lại
    // Khi giải phóng bộ nhớ, chỉ nên sử dụng delete[] trên một trong hai con trỏ
}