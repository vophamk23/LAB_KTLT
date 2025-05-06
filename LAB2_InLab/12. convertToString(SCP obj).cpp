#include <iostream>
#include <sstream> // Thư viện cho stringstream
#include <string>
using namespace std;
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

// Hàm chuyển đổi đối tượng SCP thành chuỗi
// Hàm này sẽ tạo ra một chuỗi mô tả SCP theo định dạng yêu cầu
// Đầu vào: một đối tượng SCP
// Đầu ra: một chuỗi mô tả SCP
// Định nghĩa hàm convertToString
string convertToString(SCP obj)
{
    // Sử dụng stringstream để xây dựng chuỗi kết quả
    stringstream result;

    // Thêm mã định danh (zero-padded nếu cần)
    result << "Item #: SCP-";
    if (obj.id < 10)
    {
        result << "00" << obj.id;
    }
    else if (obj.id < 100)
    {
        result << "0" << obj.id;
    }
    else
    {
        result << obj.id;
    }
    result << endl;

    // Thêm loại đối tượng
    result << "Object Class: ";
    if (obj.objClass == 0)
    {
        result << "Safe";
    }
    else if (obj.objClass == 1)
    {
        result << "Euclid";
    }
    else if (obj.objClass == 2)
    {
        result << "Keter";
    }
    result << endl;

    // Thêm thủ tục quản thúc đặc biệt
    result << "Special Containment Procedures: " << obj.speConProcedures << endl;

    // Thêm mô tả
    result << "Description: " << obj.description;

    // Thêm các phụ lục (nếu có)
    if (obj.numAddendums > 0 && obj.addendums != nullptr)
    {
        for (int i = 0; i < obj.numAddendums; i++)
        {
            result << endl
                   << obj.addendums[i];
        }
    }

    return result.str();
}