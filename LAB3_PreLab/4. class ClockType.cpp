#include <iostream>
using namespace std;

// Định nghĩa lớp ClockType
// Lớp này đại diện cho một đồng hồ với giờ, phút và giây
class ClockType
{
public:
    ClockType(int, int, int); // constructor with parameters
    ClockType();              // default constructor
    void printTime() const;

private:
    int hr;
    int min;
    int sec;
};

// Hàm khởi tạo với 3 tham số
ClockType::ClockType(int hours, int minutes, int seconds)
{
    // Kiểm tra điều kiện hợp lệ cho giờ
    if (hours >= 0 && hours < 24)
        hr = hours;
    else
        hr = 0;

    // Kiểm tra điều kiện hợp lệ cho phút
    if (minutes >= 0 && minutes < 60)
        min = minutes;
    else
        min = 0;

    // Kiểm tra điều kiện hợp lệ cho giây
    if (seconds >= 0 && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}

// Hàm khởi tạo mặc định không có tham số
ClockType::ClockType()
{
    hr = 0;
    min = 0;
    sec = 0;
}

void ClockType::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ":";
    if (min < 10)
        cout << "0";
    cout << min << ":";
    if (sec < 10)
        cout << "0";
    cout << sec;
}