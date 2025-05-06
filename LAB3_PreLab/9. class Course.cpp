#include <iostream>
using namespace std;

// Giả sử class Course đã được định nghĩa như sau:
class Course
{
private:
    int courseID;
    int numOfStudents;
    int numOfTeachers;
    int numOfTAs;

public:
    void getinfo();
    void disinfo();
};

// Hiện thực phương thức getinfo() để nhập thông tin khóa học
void Course::getinfo()
{
    cin >> courseID >> numOfStudents >> numOfTeachers >> numOfTAs;
}

// Hiện thực phương thức disinfo() để hiển thị thông tin khóa học
void Course::disinfo()
{
    cout << endl
         << "CourseID = " << courseID << endl;
    cout << "Number of student = " << numOfStudents << endl;
    cout << "Number of teacher = " << numOfTeachers << endl;
    cout << "Number of TA = " << numOfTAs << endl;
}

int main()
{
    int n;

    // Nhập số lượng khóa học
    cin >> n;

    // Tạo mảng động các đối tượng Course với n phần tử
    Course *courses = new Course[n];

    // Nhập thông tin cho từng khóa học
    for (int i = 0; i < n; i++)
    {
        cout << "ID: Number of Students: Number of Teachers: Number of TAs: ";
        courses[i].getinfo();
    }
    // Hiển thị thông tin của tất cả các khóa học
    for (int i = 0; i < n; i++)
    {
        courses[i].disinfo();
    }

    // Giải phóng bộ nhớ đã cấp phát
    delete[] courses;

    return 0;
}