#include <iostream>
#include <cstring> // Thư viện cho strlen và strcpy
using namespace std;

// Định nghĩa lớp Book
// Lớp này đại diện cho một cuốn sách với tên sách
class Book
{
    char *name;

public:
    Book(const char *);
    ~Book();

    void display();
    char *getName();
};

void Book::display()
{
    cout << "Book: " << this->name << endl;
}

char *Book::getName()
{
    return this->name;
}

// TODO: Book and ~Book
Book::Book(const char *inputName)
{
    // Cấp phát bộ nhớ để lưu chuỗi name
    name = new char[strlen(inputName) + 1]; // +1 để chứa ký tự null '\0'
    strcpy(name, inputName);                // Sao chép chuỗi vào vùng nhớ
}

Book::~Book()
{
    delete[] name; // Giải phóng bộ nhớ đã cấp phát
}
