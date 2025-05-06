#include <iostream>
using namespace std;

template <typename T>
class Array
{
public:
    // Constructor: khởi tạo mảng và gán giá trị khởi đầu
    Array(int size, T initValue);

    // Destructor: thu hồi vùng nhớ Heap
    ~Array();

    // Khai báo hàm print (chưa định nghĩa)
    void print();

private:
    int size;
    T *p;
};

// Constructor
template <typename T>
Array<T>::Array(int size, T initValue)
{
    this->size = size;
    p = new T[size]; // cấp phát mảng trên heap

    for (int i = 0; i < size; ++i)
    {
        p[i] = initValue; // khởi tạo giá trị cho từng phần tử
    }
}

// Destructor
template <typename T>
Array<T>::~Array()
{
    delete[] p; // thu hồi vùng nhớ Heap
}
