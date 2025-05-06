#include <iostream>
#include <string>    // Thư viện xử lý chuỗi
using namespace std; // Sử dụng không gian tên chuẩn

// Định nghĩa cấu trúc SCP
struct SCP
{
    int id;                  // Mã định danh của SCP
    int objClass;            // Loại đối tượng (0: Safe, 1: Euclid, 2: Keter)
    string speConProcedures; // Thủ tục quản thúc đặc biệt
    string description;      // Mô tả SCP
    string *addendums;       // Mảng các phụ lục (nếu có)
    int numAddendums;        // Số lượng phụ lục
};

// Hàm sao chép một đối tượng SCP
// Hàm này sẽ tạo ra một bản sao của đối tượng SCP đầu vào
// Đầu vào: một con trỏ đến đối tượng SCP gốc
// Đầu ra: một con trỏ đến đối tượng SCP mới được sao chép
// Định nghĩa hàm cloneSCP
SCP *cloneSCP(SCP *original)
{
    // Kiểm tra con trỏ đầu vào có hợp lệ hay không
    if (original == nullptr)
    {
        return nullptr;
    }

    // Cấp phát bộ nhớ cho đối tượng SCP mới
    SCP *clone = new SCP;

    // Sao chép các thông tin cơ bản
    clone->id = original->id;
    clone->objClass = original->objClass;
    clone->speConProcedures = original->speConProcedures;
    clone->description = original->description;

    // Xử lý các phụ lục
    clone->numAddendums = original->numAddendums;

    // Nếu có phụ lục, cần thực hiện deep copy
    if (original->numAddendums > 0 && original->addendums != nullptr)
    {
        // Cấp phát mảng mới cho các phụ lục
        clone->addendums = new string[original->numAddendums];

        // Sao chép từng phụ lục
        for (int i = 0; i < original->numAddendums; i++)
        {
            clone->addendums[i] = original->addendums[i];
        }
    }
    else
    {
        // Nếu không có phụ lục, đặt con trỏ là nullptr
        clone->addendums = nullptr;
    }

    return clone;
}