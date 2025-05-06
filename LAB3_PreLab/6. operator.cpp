template <typename T>
class Array
{
public:
    Array(int size, T initValue);
    ~Array();

    void setAt(int idx, const T &value);
    T getAt(int idx);
    T &operator[](int idx);

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

// TODO
template <typename T>
T &Array<T>::operator[](int idx)
{
    // Kiểm tra chỉ số idx có hợp lệ hay không
    if (idx < 0 || idx >= size)
    {
        throw -1; // Ném ngoại lệ -1 nếu chỉ số không hợp lệ
    }

    // Trả về tham chiếu đến phần tử tại vị trí idx
    return p[idx];
}
