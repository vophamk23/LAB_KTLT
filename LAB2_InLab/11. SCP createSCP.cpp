#include <iostream>  // Thư viện nhập xuất
#include <string>    // Thư viện xử lý chuỗi
using namespace std; // Sử dụng không gian tên chuẩn

// Định nghĩa cấu trúc SCP
struct SCP
{
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string *addendums;
    int numAddendums;
};

SCP createSCP(int id, int objClass, string speConProcedures, string description, string *addendums,
              int numAddendums)
{
    // Khởi tạo một đối tượng SCP mới
    SCP newSCP;

    // Gán các giá trị cơ bản
    newSCP.id = id;                             // Gán mã định danh
    newSCP.objClass = objClass;                 // Gán loại đối tượng
    newSCP.speConProcedures = speConProcedures; // Gán thủ tục chứa giữ đặc biệt
    newSCP.description = description;           // Gán mô tả

    // Cấp phát bộ nhớ cho mảng addendums
    newSCP.numAddendums = numAddendums;          // Lưu số lượng phụ lục
    newSCP.addendums = new string[numAddendums]; // Cấp phát mảng động mới để lưu các phụ lục

    // Sao chép từng chuỗi phụ lục từ mảng đầu vào sang mảng mới
    for (int i = 0; i < numAddendums; i++)
    {
        newSCP.addendums[i] = addendums[i]; // Sao chép nội dung phụ lục thứ i
    }
    // Trả về đối tượng SCP đã được khởi tạo đầy đủ
    return newSCP;
}