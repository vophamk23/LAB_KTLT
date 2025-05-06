#include <iostream>
using namespace std;

// TODO
class Integer
{
private:
    int val;

public:
    // Constructor nhận int
    Integer(int v) : val(v) {}

    // Constructor nhận con trỏ Integer*
    Integer(Integer *other) : val(other->val) {}

    // Quá tải toán tử + để Integer + Integer
    Integer operator+(const Integer &other) const
    {
        return Integer(this->val + other.val);
    }

    // Quá tải toán tử + để Integer + int
    Integer operator+(int x) const
    {
        return Integer(this->val + x);
    }

    // Khai báo print
    void print();
};

void Integer::print()
{
    cout << this->val << endl;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    Integer a(x);
    Integer b(y);
    Integer *t = new Integer(z);
    Integer c(t);

    a.print();
    b.print();
    (a + b + c + 4).print();

    delete t;
    return 0;
}