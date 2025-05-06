class Integer
{
private:
    int val;

public:
    // Constructor nhận biến val ban đầu
    Integer(int initialValue)
    {
        val = initialValue;
    }

    // Phương thức setValue() để thay đổi giá trị biến val
    void setValue(int newValue)
    {
        val = newValue;
    }

    // Phương thức getValue() để lấy giá trị biến val
    int getValue() const
    {
        return val;
    }
};