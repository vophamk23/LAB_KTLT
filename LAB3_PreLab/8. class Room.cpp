class Room
{
private:
    double length;
    double breadth;
    double height;

public:
    // Constructor với 3 tham số length, breadth, height
    Room(double length, double breadth, double height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    // Phương thức calculateArea() tính diện tích của căn phòng
    double calculateArea()
    {
        // Diện tích của phòng = diện tích sàn
        // = length * breadth
        return length * breadth;
    }

    // Phương thức calculateVolume() tính thể tích của căn phòng
    double calculateVolume()
    {
        // Thể tích = chiều dài * chiều rộng * chiều cao
        return length * breadth * height;
    }
};