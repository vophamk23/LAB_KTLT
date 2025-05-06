#include <iostream>
#include <string>
#include <new> // std::nothrow
using namespace std;
// Định nghĩa cấu trúc SCP (Secure, Contain, Protect) để lưu trữ thông tin về các vật thể SCP
// Cấu trúc này bao gồm các trường thông tin như mã định danh, phân loại, quy trình quản thúc đặc biệt, mô tả và phụ lục đính kèm
// Các trường này được sử dụng để quản lý và theo dõi các vật thể SCP trong tổ chức SCP
// Cấu trúc này có thể được mở rộng hoặc thay đổi tùy theo yêu cầu của tổ chức SCP
struct SCP
{
    int id;                  // Mã định danh của vật thể
    int objClass;            // Phân loại của vật thể
    string speConProcedures; // Quy trình quản thúc đặc biệt
    string description;      // Mô tả đặc điểm của vật thể
    string *addendums;       // Mảng các phụ lục đính kèm
    int numAddendums;        // Số lượng phụ lục đính kèm
};