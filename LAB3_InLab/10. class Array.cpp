#include <iostream>
using namespace std;

template <typename T>
class Array
{
public:
    Array(int size, T initValue);
    ~Array();
    Array(const Array<T> &other);               // Copy constructor
    Array<T> &operator=(const Array<T> &other); // Copy assignment operator
    void print();

private:
    int size;
    T *p;
};
template <typename T>
void Array<T>::print()
{
    for (int i = 0; i < this->size; ++i)
    {
        cout << (i > 0 ? " " : "")
             << this->p[i];
    }
    cout << endl;
}
// Copy Constructor
template <typename T>
Array<T>::Array(const Array<T> &other)
{
    cout << "Call copy constructor" << endl;
    this->size = other.size;
    this->p = new T[this->size];
    for (int i = 0; i < this->size; ++i)
    {
        this->p[i] = other.p[i];
    }
}
// Copy Assignment Operator
template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    cout << "Call assignment operator" << endl;
    if (this == &other)
    {
        // Tránh tự gán
        return *this;
    }
    // Giải phóng bộ nhớ cũ
    delete[] this->p;
    // Cấp phát lại và sao chép dữ liệu
    this->size = other.size;
    this->p = new T[this->size];
    for (int i = 0; i < this->size; ++i)
    {
        this->p[i] = other.p[i];
    }
    return *this;
}
